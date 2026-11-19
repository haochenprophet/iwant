# 04 · Linux 软件编程学习笔记

> 原文出处：CSDN「斑马819」《Linux软件编程学习笔记》系列，共 13 篇，发布于 2026-08-21 至 2026-09-07。

## 一、系列定位

这 13 篇是一条**从命令行走到网络服务**的动手路线：先用 Shell 熟悉 Linux 的命令行环境，再用 C 库函数与系统调用读写文件，接着创建进程、线程并解决它们之间的同步问题，然后用 IPC 打通彼此独立的地址空间，最后把这些零件拼成 UDP/TCP 服务器、HTTP 服务与数据库访问。

- **以接口为主线**：每篇都按"函数原型 → 参数含义 → 返回值约定 → 可运行示例"展开，重点始终落在 API 怎么用、错在哪里。
- **层层递进**：前一篇的遗留问题就是后一篇的动机，例如标准 IO 之后必然要问"库函数底下是什么"，于是有了文件 IO；进程地址空间独立，于是有了 IPC。
- **面向落地**：结尾几篇（HTTP、并发服务器、数据库）已经接近一个真实服务器的骨架，而不是孤立的知识点。

## 二、前置知识与环境

- **C 语言**：数组、字符串、结构体、指针与二级指针、位运算，是本系列所有示例的载体。
- **Linux 日常操作**：目录与文件命令、权限、重定向与管道；01 篇既是复习，也是后续"命令背后是哪个系统调用"的对照表。
- **数据结构基础**：链表与队列，帮助理解缓冲区、消息队列这类结构。
- **环境**：Ubuntu + Bash + `gcc`；线程相关代码需要 `-pthread`；网络篇涉及 `ifconfig`、`/etc/network/interfaces`、虚拟机 NAT 与桥接两种模式；数据库篇使用 `sqlite3`；IPC 调试可用 `ipcs`、`ipcrm` 观察和清理内核对象。

## 三、知识脉络

四个阶段，各自解决一类问题：

**阶段一 · IO（01–03）——数据如何进出程序。** Shell 是用户与内核之间的命令解释器，负责接收、解析命令并创建进程执行；标准 IO 是库函数，用 `FILE *` 表示文件流、带用户态缓存；文件 IO 是系统调用，用 `int fd` 操作、没有标准 IO 那层用户态缓存，因此也能用于设备文件和通信类文件；目录 IO 则把同一套"打开—读—关闭"搬到目录项上。

**阶段二 · 并发（04–06）——多个执行流如何并存。** 进程是资源分配的基本单位，地址空间相互独立；线程是 CPU 调度的基本单位，同进程的线程共享地址空间，通信方便却必须同步。06 篇沿着"共享变量 → 竞态条件 → 互斥锁、条件变量、信号量、读写锁"的顺序，把"能并发"推进到"并发得对"。

**阶段三 · IPC（07–08）——独立地址空间之间如何交换数据并同步。** 匿名管道解决亲缘进程的半双工字节流，FIFO 让无亲缘进程也能接上；信号只传递事件；消息队列以消息为单位；共享内存最快，但只负责共享、不负责同步，于是要配上有名信号量。

**阶段四 · 网络与服务（09–13）——跨主机通信与对外提供服务。** UDP 用 `sendto`/`recvfrom` 点到点发报文，TCP 用 socket、bind、listen、accept、connect 建立可靠字节流；HTTP 规定这些字节怎么组织成请求与响应；并发服务器模型决定一个服务器如何同时应付多个客户端；SQLite 则补上数据的持久化。

```
Shell → 标准 IO → 文件 IO / 目录 IO
                        ↓
                  进程 → 线程 → 同步与互斥
                        ↓
        管道 / FIFO / 信号 / 消息队列 / 共享内存 / 信号量
                        ↓
        UDP → TCP → HTTP → TCP 并发服务器 → SQLite
```

## 四、逐篇速览

| 篇号 | 标题 | 一句话概括 | 关键知识点 |
| --- | --- | --- | --- |
| 01 | [Shell](01-Shell.md) | 把命令行环境、权限、重定向与脚本串成一套日常工具 | `pwd` `ls` `cd`、`> >> <`、管道、通配符、`$?`、`if` `for` `while`、Shebang |
| 02 | [标准IO](02-标准IO.md) | 用 `FILE *` 完成"打开—读写—关闭"，并理解三类缓存 | `fopen` `fclose`、`fgetc` `fputc`、`fgets` `fputs`、`fprintf` `fscanf`、`fread` `fwrite`、全缓存行缓存不缓存 |
| 03 | [文件IO与目录IO](03-文件IO与目录IO.md) | 换成系统调用与文件描述符，顺手用 `readdir` 实现一个 `ls` | `open` `read` `write` `close` `lseek`、fd 分配规律、`DIR *`、`struct dirent` 的 `d_name`、`getcwd` `chdir` |
| 04 | [进程](04-进程.md) | 弄清程序与进程、`fork` 的两次返回，以及僵尸与孤儿的来历 | `fork` `getpid` `getppid`、`exit`、`wait` `waitpid`、`WNOHANG`、`execl` `execv` 与 l/v/p/e |
| 05 | [线程](05-线程.md) | 用 pthread 创建、等待、回收线程，划清共享与独享的边界 | `pthread_create` `pthread_join` `pthread_exit` `pthread_cancel`、线程传参、栈与全局变量的归属 |
| 06 | [线程间通信](06-线程间通信.md) | 从竞态条件出发，给出互斥、等待通知、顺序控制三类手段 | 竞态条件、`pthread_mutex_*`、`pthread_cond_wait/signal/broadcast`、`sem_init/wait/post`、读写锁、生产者消费者 |
| 07 | [进程间通信（一）](07-进程间通信（一）.md) | 打通有亲缘与无亲缘进程的字节流通道，并引入事件通知 | `pipe` 的 `pipefd[0]`/`pipefd[1]`、`mkfifo`、`kill` `signal`、`SIGINT`、`SIGKILL` `SIGSTOP` |
| 08 | [进程间通信（二）](08-进程间通信（二）.md) | 用消息队列、共享内存、信号量覆盖传消息、共享大数据、同步三件事 | `ftok` `msgget` `msgsnd` `msgrcv`、`shmget` `shmat` `shmdt` `shmctl`、`sem_open` `sem_wait` `sem_post` |
| 09 | [网络（一）——UDP通信](09-网络（一）——UDP通信.md) | 从网卡配置一路走到无连接的 `sendto`/`recvfrom` | `socket`、`sockaddr_in`、`htons`、`inet_addr` `inet_ntoa`、`bind`、NAT 与桥接 |
| 10 | [网络（二）——TCP通信](10-网络（二）——TCP通信.md) | 用 socket/bind/listen/accept/connect 建起可靠字节流通道 | 三次握手、四次挥手、`sockfd` 与 `confd` 分工、`recv` 返回 0、TCP 传文件 |
| 11 | [HTTP协议](11-HTTP协议.md) | 在 TCP 之上读懂并手写请求与响应报文 | 请求行请求头空行正文、状态码、`Content-Type`、`\r\n\r\n`、用 C 拼一个响应 |
| 12 | [TCP并发服务器模型](12-TCP并发服务器模型.md) | 让服务器同时服务多个客户端，从一线程一客户端走到事件驱动 | 多线程与线程池、四种 IO 模型、`select` 的 `FD_*`、`epoll_create/ctl/wait`、`EPOLLIN` `EPOLLET` |
| 13 | [数据库](13-数据库.md) | 用 SQLite 把数据落到文件里，并从 C 程序里增删改查 | 关系型与非关系型、`sqlite3`、`INTEGER` `REAL` `TEXT` `BLOB`、`CREATE TABLE` `INSERT INTO` `SELECT` `WHERE`、`sqlite3_open` |

## 五、核心要点

### 5.1 文件与 IO

- **标准 IO**：`fopen(pathname, mode)` 成功返回 `FILE *`、失败返回 `NULL`；`fclose` 成功返回 `0`、失败返回 `EOF`。`mode` 的六种组合 `r` `r+` `w` `w+` `a` `a+` 与 `O_RDONLY`、`O_RDWR`、`O_CREAT` 加 `O_TRUNC`、`O_APPEND` 一一对应。
- **按字符与按行**：`fgetc` 成功返回字符的 ASCII 码，失败或文件结束返回 `EOF`，故必须用 `int` 接收；`fgets(buf, size, fp)` 读到行末或文件尾返回 `NULL`，且会把 `\n` 一并读入；`fputs` 不会自动补换行。
- **缓存**：标准 IO 是带缓存的 IO，全缓存（文件流，典型 4KB）在缓冲区满、`fflush`、`fclose`、程序结束时刷新；行缓存（终端流，典型 1KB）遇到 `\n` 刷新；`stderr` 不缓存，适合错误输出。
- **文件 IO**：`open` 返回 `fd`（成功 `>= 0`，失败 `-1`），使用 `O_CREAT` 时必须给第三个参数 `mode`；`read` 的返回值要分三种看——大于 0 是实际字节数，等于 0 是文件末尾，`-1` 是失败；`write` 返回实际写入字节数；`lseek(fd, offset, whence)` 控制偏移量，`SEEK_END` 配合返回值即可求文件大小。
- **目录 IO**：`opendir` 返回 `DIR *`，`readdir` 每次取一个 `struct dirent`、读完返回 `NULL`，真正要打印的是 `d_name`；`closedir` 成功返回 `0`。`ls` 的 C 版就是这三步加上跳过 `.` 与 `..`。
- **权限的另一层含义**：目录的 `r` 是能读出目录项、`w` 是能在其中创建删除文件、`x` 是能进入目录并访问其中对象；`mkdir` 的 `0777` 仍会被 `umask` 削减，`rmdir` 只能删空目录。

```c
int srcfd = open("src.jpg", O_RDONLY);
int dstfd = open("dst.jpg", O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (srcfd == -1 || dstfd == -1) { perror("open"); return -1; }

char buf[4096] = {0};
int ret = 0;
while ((ret = read(srcfd, buf, sizeof(buf))) > 0)
    write(dstfd, buf, ret);   /* 用 ret，不能用 sizeof(buf) */
```

### 5.2 进程与线程

- **`fork` 调用一次、返回两次**：`< 0` 表示失败，`== 0` 表示当前执行流在子进程，`> 0` 表示在父进程且返回值是子进程 PID。父子进程拥有各自独立的地址空间，`num++` 在两边都得到 11 而不是 12；连续 `fork()` n 次，进程数为 2 的 n 次方。
- **退出与回收**：`exit(status)` 结束整个进程，普通函数里的 `return` 只返回调用者；`wait(&status)` 阻塞回收任一子进程、成功返回其 PID，配合 `WIFEXITED` 与 `WEXITSTATUS` 取退出码；`waitpid(pid, &status, WNOHANG)` 可以指定子进程并改为非阻塞，子进程未结束返回 0。
- **`exec` 族**：`l` 是参数列表、`v` 是参数数组、`p` 走 `PATH`、`e` 带环境变量；`exec` 不创建新进程，只让当前进程空间装载另一份程序，所以成功后其后的代码不会执行，常见写法是 `execl(...)` 之后紧跟 `perror` 和 `exit`。`fork` 加 `exec` 正是 Shell 执行一条命令的本质。
- **线程**：`pthread_create(&tid, NULL, thread_fun, arg)` 成功返回 `0`、失败返回非 0；线程函数固定为 `void *(*)(void *)`；`pthread_join(tid, &retval)` 既等待线程结束也取出返回值，返回值必须保证线程结束后仍然有效，不能返回线程栈上的局部变量地址。线程共享代码、全局变量、堆和已打开的文件描述符，独享栈、寄存器、程序计数器和线程 ID。
- **线程的结束方式**：线程函数里 `return` 与 `pthread_exit(NULL)` 都能结束当前线程；`pthread_cancel(tid)` 只是发出取消请求，不应理解为立即强制杀死线程。主线程若不等子线程直接退出，整个进程结束，其他线程会一并消失。

### 5.3 同步与互斥

- **竞态条件**：两个线程各自 `num++`，可能都读到 0 再写回 1，结果依赖执行时序。访问共享资源的那段代码就是临界区。
- **互斥锁**：`pthread_mutex_init` 初始化，`lock`/`unlock` 夹住临界区，`destroy` 销毁；它保证同一时刻只有一个线程进入，但不负责安排执行顺序。
- **条件变量**：`pthread_cond_wait(&cond, &mutex)` 在等待期间**释放**互斥锁，被唤醒后重新加锁，因此必须写在 `while (条件不满足)` 里而不是 `if` 里——被唤醒不代表条件已经满足。`pthread_cond_signal` 唤醒一个，`broadcast` 唤醒全部。
- **信号量**：`sem_init(&sem, 0, value)` 中第二个参数 0 表示线程间使用；`sem_wait` 申请（计数减一，为 0 则阻塞），`sem_post` 释放（计数加一）。用三个初值为 1、0、0 的信号量首尾相接，就能让 A、B、C 三个线程严格按序循环打印。
- **读写锁**：`pthread_rwlock_t`，多个读线程可同时读，写线程独占，适合读多写少的共享数据。多个线程互相等待对方持有的资源即死锁。

### 5.4 进程间通信

- **管道**：`pipe(pipefd)` 得到两个 fd，`pipefd[0]` 读、`pipefd[1]` 写，是半双工的内核缓冲区，先进先出；`fork` 后子进程继承这两个 fd，所以匿名管道天然适合父子进程。双方各自关掉不用的那一端，EOF 判断才准确。
- **FIFO**：`mkfifo("/tmp/Myfifo", 0664)` 在文件系统中留下一个有名字的特殊文件，两个互不相干的程序分别以 `O_RDONLY` 和 `O_WRONLY` 打开即可通信。
- **信号**：`kill(pid, sig)` 向进程发送信号，不等于"杀死进程"；`signal(SIGINT, handler)` 注册处理函数；`SIGKILL` 与 `SIGSTOP` 无法被捕获、阻塞或忽略，所以 `kill -9` 一定生效。
- **消息队列**：`ftok` 生成 key，`msgget` 创建或获取队列并返回 msgid，此后一律用 msgid；`msgsnd` 发送，`msgrcv` 按 `msgtyp` 接收，`msgctl` 的 `IPC_RMID` 删除。消息结构体首成员必须是 `long mtype` 且为正数，`msgsz` 只算正文、不含 `mtype`。
- **共享内存**：`shmget` 创建，`shmat` 映射到本进程地址空间得到指针，`shmdt` 解除映射（不是删除），`shmctl` 的 `IPC_RMID` 才真正删除。数据不必在进程与内核之间反复复制，因此是最快的 IPC 形式，但"共享内存负责数据共享，不负责同步"。
- **有名信号量**：`sem_open("/mysem", O_CREAT, 0666, 1)` 用一个以 `/` 开头的名字让不同进程找到同一个信号量，`sem_wait`/`sem_post` 同步，`sem_close` 只是当前进程不再使用，`sem_unlink` 才删除名字。它与 System V 那套 `semget`、`semctl`、`semop` 不是一回事。

### 5.5 网络编程

- **套接字**：`socket(domain, type, protocol)`，IPv4 用 `AF_INET`，UDP 用 `SOCK_DGRAM`、TCP 用 `SOCK_STREAM`，`protocol` 一般填 0；成功返回 fd，失败返回 `-1`。套接字本质上也是一个文件描述符。
- **地址与字节序**：地址用 `struct sockaddr_in`，`sin_family` 是协议族、`sin_port` 是端口、`sin_addr` 是 IP。端口必须过 `htons` 转成网络字节序，IP 字符串用 `inet_addr` 转成二进制，打印来源地址则用 `inet_ntoa`。
- **UDP**：`sendto` 每次都要显式给出目标地址，`recvfrom` 顺带取回发送方地址；两端都是 `socket` 之后直接收发，不需要连接。
- **TCP**：服务器 `socket → bind → listen → accept`，客户端 `socket → connect`，之后双方 `send`/`recv`。`bind` 只能绑本机 IP，一个端口被占用后不能重复绑定；`listen` 的 `backlog` 是等待处理的连接请求数；`accept` 返回的**新 fd** 才用于通信，原来的监听 fd 继续接客。
- **返回值语义**：`recv` 大于 0 是字节数，`-1` 是失败，**等于 0 表示对方已关闭连接**，文件传输循环就靠这个条件收尾。
- **并发**：多线程版是一接一个客户端就 `pthread_create`，但线程数受限于栈空间，客户端极多时会耗尽资源，通常配合线程池；另一条路是 IO 多路复用。`select` 用 `FD_ZERO`/`FD_SET`/`FD_CLR`/`FD_ISSET` 管理集合，`nfds` 取最大 fd 加一，返回后还要用户自己遍历找谁就绪；`epoll` 用 `epoll_create`、`epoll_ctl`（`ADD`/`MOD`/`DEL`）、`epoll_wait`，事件表在内核，能直接拿到就绪的 fd，并支持水平触发与边沿触发（`EPOLLET`）。
- **两种复用方式的取舍**：`select` 的 fd 集合本质是数组、有数量上限，且每次都要把集合在内核与用户空间之间传递并重新遍历；`epoll` 把监听表放在内核、以事件返回就绪项，更适合大量并发连接。`epoll_wait` 的 `timeout` 写 `-1` 是一直阻塞、`0` 是立即返回、大于 0 是等待指定时长。

### 5.6 协议与应用

- **TCP 与 UDP**：TCP 面向连接、可靠传输，建连三次握手、断开四次挥手，靠确认、滑动窗口、拥塞控制保证可靠；UDP 无连接、开销小，适合实时性要求高的场景。
- **HTTP**：建立在 TCP 之上，请求由请求行（方法、URL、版本）、请求头、空行、正文组成，响应由状态行、响应头、空行、正文组成；头部与正文之间必须有空行，报文换行统一用 `\r\n`，`\r\n\r\n` 即头部结束。常见状态码 `200` 成功、`301`/`302` 重定向、`400`/`401`/`403` 客户端问题、`404` 资源不存在、`500` 服务器内部错误；`Content-Type` 决定浏览器如何解释正文，如 `text/html`、`image/jpeg`。
- **HTTP 服务器**：直接复用 TCP 服务器框架——`accept` 后 `recv` 收到请求，从请求行里取出 `/index.html`，`open` 该文件并 `send` 回响应，头部写全 `Content-Type` 与 `Content-Length` 即可被浏览器解析。
- **SQLite**：轻量级关系型数据库，不需要独立服务器进程，一个 `.db` 文件就是数据库；数据类型有 `INTEGER`、`REAL`、`TEXT`、`BLOB`；`CREATE TABLE` 建表，`INSERT INTO` 插入，`SELECT` 配合 `WHERE` 查询；C 程序侧 `sqlite3_open` 打开、执行 SQL、`sqlite3_close` 关闭。交互式命令里 `.tables`、`.schema`、`.headers on`、`.mode column` 最常用。

## 六、易错点与踩坑

1. **`fork()` 的返回值看错对象**：只有父进程拿到子进程 PID，子进程拿到的是 0。用 `if (pid == 0)` 判断子进程、`pid < 0` 判断失败；误以为两边都拿到 PID 就会写出两个父进程分支。
2. **把父子进程当成共享变量**：`fork` 后地址空间独立，父子各自 `num++` 都得到 11。想让两个进程共享数据，只能走 IPC 或共享内存。
3. **僵尸与孤儿方向搞反**：子进程结束而父进程没 `wait` 回收，留下状态 `Z` 的僵尸；父进程先结束、子进程还在跑才是孤儿，会被特殊进程接管，本身不是错误。
4. **互斥锁死锁**：加锁后忘记 `unlock`，或两个线程以相反顺序抢两把锁，就会互相等待。另外 `pthread_cond_wait` 会在等待期间释放锁、醒来后重新加锁，这一点漏掉就会误判锁的状态。
5. **把 `recv()` 返回 0 当成"暂时没数据"**：0 是对端关闭连接，`-1` 才是出错。循环里不处理 0，服务器就会对着已断开的连接空转。
6. **写回时用了 `sizeof(buf)`**：`read` 最后一次往往只读到一部分，必须按返回值 `ret` 写；按缓冲区大小写会把没读到的部分一起写进目标文件。
7. **端口与 IP 没过字节序**：`sin_port = 8888` 在本地是小端，到了网络上就错了，必须 `htons(8888)`；IP 字符串也不能直接赋值，要用 `inet_addr`。
8. **管道两端没关干净**：父进程关读端、子进程关写端。不关会导致文件描述符泄漏，读端也等不到真正的 EOF。
9. **`fgetc()` 用 `char` 接收**：`EOF` 是 `int` 值，塞进 `char` 后循环可能永远不结束，必须写 `int ch`。
10. **消息队列的大小算错**：`mtype` 必须是 `long` 且为正数，`msgsz` 只算 `mtext` 的长度，不能写 `sizeof(struct msgbuf)`。
11. **用 `-1` 判断 `pthread_create()` 失败**：它成功返回 0、失败返回非 0，与多数系统调用的 `-1` 约定不同，应写 `if (ret != 0)`。
12. **以为 `exec` 之后还会往下走**：`exec` 成功即替换了进程映像，后续代码只在失败时执行，所以 `execl(...)` 后面必须跟 `perror` 与 `exit`。

## 七、关键术语

| 术语 | 说明 |
| --- | --- |
| Shell | 用户与内核之间的命令解释器，负责接收并解析命令、查找程序、创建进程执行 |
| 文件描述符（File Descriptor，FD） | 内核为打开文件分配的非负整数，0、1、2 固定为标准输入、标准输出、标准错误 |
| 标准 IO | C 库函数接口，用 `FILE *` 表示文件流，带用户态缓存 |
| 文件 IO | 系统调用接口，用 `int fd` 操作，没有标准 IO 那层用户态缓存 |
| 进程（Process） | 程序的一次动态执行过程，资源分配的基本单位，地址空间独立 |
| 僵尸进程（Zombie Process） | 子进程已结束但父进程未回收其退出信息，状态为 `Z` |
| 孤儿进程（Orphan Process） | 父进程先结束而子进程仍在运行，之后被特殊进程接管 |
| 线程（Thread） | 进程内部的一条执行路径，CPU 调度的基本单位 |
| 竞态条件（Race Condition） | 多个线程并发访问共享数据，最终结果依赖执行时序 |
| 死锁（Deadlock） | 多个线程相互等待对方持有的资源，导致谁也无法继续执行 |
| 互斥锁（Mutex） | 保证同一时刻只有一个线程进入临界区的同步机制 |
| 条件变量（Condition Variable） | 让线程等待某个条件，并由另一线程在条件满足后唤醒它 |
| 信号量（Semaphore） | 带计数的同步原语，`wait` 申请、`post` 释放，也可控制执行顺序 |
| 进程间通信（Inter-Process Communication，IPC） | 不同进程之间交换数据与同步的机制 |
| 管道与 FIFO | 内核缓冲区形式的单向字节流；FIFO 在文件系统中有名字，可跨无亲缘进程 |
| 共享内存（Shared Memory） | 将同一块内存映射进多个进程，速度最快但不负责同步 |
| 套接字（Socket） | 网络通信的端点，本质也是文件描述符 |
| 三次握手与四次挥手 | TCP 建立连接与断开连接的报文交换过程 |
| IO 多路复用（I/O Multiplexing） | 用单个线程同时监听多个 fd 的 IO 事件，代表实现是 `select` 与 `epoll` |

## 八、延伸与衔接

- **接到 [06-arm-imx6ull](../06-arm-imx6ull/)**：那边关心寄存器与硬件时序（点灯、中断、时钟、IIC、LCD、PWM/ADC、SPI），这边关心"设备也是一个文件"。字符设备驱动对上暴露的正是 `open`/`read`/`write`/`close` 这组系统调用，与 03 篇一一对应；12 篇的信号驱动 IO 由内核监测事件再以 `SIGIO` 通知用户层，思路上与中断通知一脉相承；驱动内部同样要面对互斥与同步问题。
- **接到服务器开发**：04 篇的 fork 加 exec 解释了 Shell 怎么执行命令，12 篇的 select 与 epoll 是事件循环的雏形，11 篇的 HTTP 报文格式加上 13 篇的 SQLite，就足以拼出一个能返回页面、能落库的小型 Web 服务器。
- **接到嵌入式应用**：05 篇"采集、存储、显示、日志"各自成线程的分工，是设备端程序的典型结构；07 与 08 篇的 IPC 用来在守护进程之间传数据；09 与 10 篇的 UDP/TCP 负责把现场数据送到上位机。
- **读法建议**：按 01 到 13 顺序读，示例都自己编译跑一遍；读完 03、04 再回看 01，会明白每条命令背后是哪个系统调用；读完 12 再回看 10 的单客户端 `accept` 循环，才会真正理解为什么要事件驱动。
