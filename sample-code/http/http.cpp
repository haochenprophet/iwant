
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <netdb.h>
#include <unistd.h>
#include <fcntl.h>
#include <fcntl.h>
#include <sys/time.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/socket.h>
#define MaxRecvLen  500

//define netwoek DOMAIN
struct DOMAIN
{
 char url[255];      //http://www.xh88.com:80/index.PHP ,url
 char host[20];      //www.xh88.com  host address
 int  port;       //socket port
};
typedef struct DOMAIN domain;

int main(int argc,char *argv[])
{

 int sock_id;       //sock_id

 struct hostent *hostbyname;    //host info 
 struct sockaddr_in remote_addr;   //remote ip and port 

 struct timeval timeout;
 fd_set sockid_readable;

 domain web_domain;

 char send_str[255];
 char *tempStr,*recBuf;

 int recv_numb;
 FILE *fp;
 char *tmpfile;

 timeout.tv_sec = 1;
 timeout.tv_usec = 500000;
 web_domain.port=80;

 tmpfile="abc.txt";

 if(argc<2) 
 { printf("%s","/n/nExp: ./client http://192.168.1.254:80 /n/n");
  exit(1);
 }
 if(!(tempStr=strstr(argv[1],"http://")))   // http://
 { printf("parameter error!/n");
  exit(0);
 }
 strcpy(web_domain.url,tempStr);      //http://www.xh88.com:80/index.php
 strcpy(web_domain.host,web_domain.url+7);   //www.xh88.com
 // host
 if((tempStr=strstr(web_domain.host,"/")))
 { *tempStr='/0';//get host addr
 }
 if((tempStr=strstr(web_domain.host,":")))
 { *tempStr='/0';
  web_domain.port=atoi(tempStr+1);//get port 
 }
//!
printf("%s/n%d/n%s/n",web_domain.host,web_domain.port,web_domain.url);

 hostbyname = gethostbyname(web_domain.host);  //change host name
 if((sock_id=socket(PF_INET,SOCK_STREAM,0))==-1)
 { perror("socket");
  exit(1);
 }

//init socket
 remote_addr.sin_family=AF_INET;      //tcp/ip
 remote_addr.sin_port=htons(web_domain.port);  //port
 remote_addr.sin_addr=*((struct in_addr *)hostbyname->h_addr);  //IP
 bzero(&(remote_addr.sin_zero),8); 

 if(connect(sock_id,(struct sockaddr *)&remote_addr,sizeof(remote_addr))==-1)
 { perror("connect");
  exit(1);
 }
printf("/n/nconnected %s:%d ok!/n/n",web_domain.url,web_domain.port);

//create GET string
 sprintf(send_str,"GET %s HTTP/1.1/nAccept: */*/nUser-Agent: Mozilla/4.0 (compatible; MSIE 5.01; Windows NT 5.0)/nHost: %s/n/n",web_domain.url,web_domain.host);
 printf("%s/n/n",send_str);
//set GET to server
 if(send(sock_id,send_str,strlen(send_str),0)==-1)
 { perror("send");
  exit(1);
 }
 recBuf=malloc(MaxRecvLen);  //alloct memory
 //fp=fopen(tmpfile,"w");
 while(1)
 {

  FD_ZERO(&sockid_readable);
  FD_SET(sock_id,&sockid_readable);
  select(sock_id+1, &sockid_readable, NULL, NULL, &timeout);
  if (!FD_ISSET(sock_id, &sockid_readable))
  { printf("Timed out./n");
   break;
  }
  recv_numb = recv(sock_id,recBuf,MaxRecvLen,0); //recv server data
  recBuf[recv_numb]='/0';

  //fputs(fp,);
  // fp=fopen(tmpfile,"w");
  printf("/n/t********* %d *******",recv_numb);
  printf("%s",recBuf);
  if(recv_numb<1)  //break ..
   break;
 }

 printf("/n/nrecv  ok!/n/n");
 close(sock_id);
 return 0;
}