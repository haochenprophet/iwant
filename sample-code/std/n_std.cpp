namespace std {
  template<class charT> struct char_traits;
  template<> class char_traits<char>;
  template<> class char_traits<char16_t>;
  template<> class char_traits<char32_t>;
  template<> class char_traits<wchar_t>;

  template<class T> class allocator;

  template <class charT, class traits=char_traits<charT> > class basic_ios;
  template <class charT, class traits=char_traits<charT> > class basic_streambuf;
  template <class charT, class traits=char_traits<charT> > class basic_istream;
  template <class charT, class traits=char_traits<charT> > class basic_ostream;
  template <class charT, class traits=char_traits<charT> > class basic_iostream;
 
 template <class charT, class traits=char_traits<charT>, class Alloc=allocator<charT> >
    class basic_stringbuf;
  template <class charT, class traits=char_traits<charT>, class Alloc=allocator<charT> > 
    class basic_istringstream;
  template <class charT, class traits=char_traits<charT>, class Alloc=allocator<charT> >
    class basic_ostringstream;
  template <class charT, class traits=char_traits<charT>, class Alloc=allocator<charT> >
    class basic_stringstream;

  template <class charT, class traits=char_traits<charT> > class basic_filebuf;
  template <class charT, class traits=char_traits<charT> > class basic_ifstream;
  template <class charT, class traits=char_traits<charT> > class basic_ofstream;
  template <class charT, class traits=char_traits<charT> > class basic_fstream;

  template <class charT, class traits=char_traits<charT> > class istreambuf_iterator;
  template <class charT, class traits=char_traits<charT> > class ostreambuf_iterator;

  template<class stateT> class fpos;

  typedef basic_ios<char>              ios;
  typedef basic_streambuf<char>        streambuf;
  typedef basic_istream<char>          istream;
  typedef basic_ostream<char>          ostream;
  typedef basic_iostream<char>         iostream;
  typedef basic_stringbuf<char>        stringbuf;
  typedef basic_istringstream<char>    istringstream;
  typedef basic_ostringstream<char>    ostringstream;
  typedef basic_stringstream<char>     stringstream;
  typedef basic_filebuf<char>          filebuf;
  typedef basic_ifstream<char>         ifstream;
  typedef basic_ofstream<char>         ofstream;
  typedef basic_fstream<char>          fstream;

  typedef basic_ios<wchar_t>           wios;
  typedef basic_streambuf<wchar_t>     wstreambuf;
  typedef basic_istream<wchar_t>       wistream;
  typedef basic_ostream<wchar_t>       wostream;
  typedef basic_iostream<wchar_t>      wiostream;
  typedef basic_stringbuf<wchar_t>     wstringbuf;
  typedef basic_istringstream<wchar_t> wistringstream;
  typedef basic_ostringstream<wchar_t> wostringstream;
  typedef basic_stringstream<wchar_t>  wstringstream;
  typedef basic_filebuf<wchar_t>       wfilebuf;
  typedef basic_ifstream<wchar_t>      wifstream;
  typedef basic_ofstream<wchar_t>      wofstream;
  typedef basic_fstream<wchar_t>       wfstream;

  typedef fpos<mbstate_t> streampos;
  typedef fpos<mbstate_t> wstreampos;
}
