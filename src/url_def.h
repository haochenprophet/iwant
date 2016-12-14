#ifndef URL_DEF_H
#define URL_DEF_H

//https://www.w3.org/Addressing/URL/url-spec.txt
#define URL_SCHEME "http,https,ftp,lda,news,gopher,telnet,wais"
#define URL_ADDRESS " httpaddress | ftpaddress | newsaddress |nntpaddress | prosperoaddress \
					| telnetaddress| gopheraddress | waisaddress |mailtoaddress  | midaddress | cidaddress"

#define URL_HTTP_ADDRESS "http://hostport[/path] [? search ]"
#define URL_FTP_ADDRESS  "ftp://login/path[ftptype] "
#define URL_AFS_ADDRESS "afs://cellname/ path"
#define URL_NEWS_ADDRESS  "news:groupart  "
#define URL_NNTP_ADDRESS "nntp :group /digits "  
#define URL_MID_ADDRESS "mid :addr-spec "
#define URL_CID_ADDRESS "cid :content-identifier"
#define URL_MAILTO_ADDRESS "mailto :: xalphas @ hostname"
#define URL_WAIS_ADDRESS "waisindex | waisdoc"

#endif
