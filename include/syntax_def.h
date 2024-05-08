# ifndef SYNTAX_DEF_H
#define SYNTAX_DEF_H

#define CLASS_SYNTAX "[template_spec]\nclass [decl_spec] tag[:base_list]\n{\n\t[member_list]\n[func_list]\n}[declarators];\n[class] tag declarators;\n";
#define MAKE_SYNTAX	"target:[dependencies] [...]\n\tcommands\n\t[...]"
#define TAG_SYNTAX "[TAG];[TAG%d];[tag];[tag%d]"
#define BRACKET_SYNTAX "[...];{...};(...);<...>"
#define C_CPP_SYNTAX "//;/*,*/"
#define URI_SYNTAX "schema://host[:port#]/path/.../[;url-params][?query-string][#anchor]"
#define URI_HIER_PART_SYNTAX "//authority-path-abempty/path-absolute/path-rootless/path-empty"

#define HTTP_URI_SYNTAX "http://authority-path-abempty[?query][#fragment]"
#define HTTPS_URI_SYNTAX "https://authority-path-abempty[?query][#fragment]"

#define ENUM_SYNTAX "enum [identifier] [: type]  {enum-list}; enum [class|struct]   [identifier] [: type] {enum-list};" 
#endif