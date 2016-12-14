
#ifndef HTTP_DEF_H
#define HTTP_DEF_H

#define HTTP_VERSION "HTTP/1.1"
#define HTTP_MESSAGE "Request | Response     ; HTTP/1.1 messages"
/*
        generic-message = start-line
                          *(message-header CRLF)
                          CRLF
                          [ message-body ]
        start-line      = Request-Line | Status-Line
*/
#define HTTP_MESSAGE_HEADER "field-name ":" [ field-value ]"
/*
       field-name     = token
       field-value    = *( field-content | LWS )
       field-content  = <the OCTETs making up the field-value
                        and consisting of either *TEXT or combinations
                        of token, separators, and quoted-string>
*/
#define HTTP_MESSAGE_BODY "entity-body| <entity-body encoded as per Transfer-Encoding>"
#define HTTP_GENERAL_HEADER "Cache-Control| Connection| Date | Pragma | Trailer | Transfer-Encoding | Upgrade | Via | Warning"

#define HTTP_REQUEST "Request-Line *(( general-header | request-header | entity-header ) CRLF) CRLF [ message-body ] "
#define HTTP_METHOD "OPTIONS:| GET| HEAD | POST | PUT | DELETE | TRAC| CONNECT | extension-method"
//       extension-method = token

#define HTTP_REQUEST_URI  "* | absoluteURI | abs_path | authority"
//OPTIONS * HTTP/1.1
//example : GET http://www.w3.org/pub/WWW/TheProject.html HTTP/1.1

#define HTTP_REQUEST_HEADER "Accept| Accept-Charset| Accept-Encoding| Accept-Language| Authorization| Expect| From \
| Host| If-Match| If-Modified-Since| If-None-Match| If-Range| If-Unmodified-Since| Max-Forwards| Proxy-Authorization| Range| Referer| TE| User-Agent"


#define HTTP_RESPONSE "Status-Line *(( general-header| response-header| entity-header ) CRLF)CRLF [ message-body ]"
/*
      - 1xx: Informational - Request received, continuing process

      - 2xx: Success - The action was successfully received,
        understood, and accepted

      - 3xx: Redirection - Further action must be taken in order to
        complete the request

      - 4xx: Client Error - The request contains bad syntax or cannot
        be fulfilled

      - 5xx: Server Error - The server failed to fulfill an apparently
        valid request
*/
#define HTTP_STATUS_CODE " \
          100  Continue  \
        | 101  Switching Protocols \
        | 200  OK \
        | 201  Created \
        | 202  Accepted \
        | 203  Non-Authoritative Information \
        | 204  No Content \
        | 205  Reset Content \
        | 206  Partial Content \
        | 300  Multiple Choices \
        | 301  Moved Permanently \
        | 302  Found \
        | 303  See Other \
        | 304  Not Modified \
        | 305  Use Proxy \
        | 307  Temporary Redirect \
        | 400  Bad Request \
        | 401  Unauthorized \
        | 402  Payment Required \
        | 403  Forbidden \
        | 404  Not Found \
        | 405  Method Not Allowed \
        | 406  Not Acceptable \
        | 407  Proxy Authentication Required \
        | 408  Request Time-out \
        | 409  Conflict \
        | 410  Gone \
        | 411  Length Required \
        | 412  Precondition Failed \
        | 413  Request Entity Too Large \
        | 414  Request-URI Too Large \
        | 415  Unsupported Media Type \
        | 416  Requested range not satisfiable \
        | 417  Expectation Failed \
        | 500  Internal Server Error \
        | 501  Not Implemented \
        | 502  Bad Gateway \
        | 503  Service Unavailable \
        | 504  Gateway Time-out \
        | 505  HTTP Version not supported \
        | extension-code \
          extension-code = 3DIGIT \
          Reason-Phrase  = *<TEXT, excluding CR, LF> \
"

#define HTTP_RESPONSE_HEADER "Accept-Ranges| Age| ETag| Location | Proxy-Authenticate  | Retry-After | Server | Vary  | WWW-Authenticate "
#define ENTITY_HEADER "Allow \
        |  Content-Encoding \
        |  Content-Language \
        |  Content-Length  \
        |  Content-Location \
        |  Content-MD5 \
        |  Content-Range \
        |  Content-Type \
        |  Expires \
        |  Last-Modified \
        |  extension-header \
           extension-header = message-header \
"

#define ENTITY_BODY "Content-Encoding( Content-Type( data ) )"
#endif