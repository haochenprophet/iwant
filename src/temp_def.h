# ifndef TEMP_DEF_H
#define TEMP_DEF_H

#define MAIN_TEMP  "\n#ifndef [TAG]_TEST\n#define [TAG]_TEST 0//1\n#endif\n\n#if [TAG]_TEST\n#include \"all_h_include.h\"\nint main(int argc, char *argv[])\n{\n\tcout << \"[TAG]_TEST\\n\\n\";\n\n\treturn 0;\n}\n#endif ";
#define CLASS_H_TEMP	"#ifndef [TAG]_H\n#define [TAG]_H\n\n#include \"object.h\"\n\nnamespace n_[tag] {\n\tclass C[tag] :public Object\n\t{\n\tpublic:\n\t\tC[tag]();\n\t\tint my_init(void *p=NULL);\n\t};\n}\n\nusing namespace n_[tag];\n\n#endif\n"
#define CLASS_CPP_TEMP "#include \"[tag].h\"\nint C[tag]::my_init(void *p)\n{\n\tthis->name = \"C[tag]\";\n\tthis->alias = \"[tag]\";\n\treturn 0;\n}\n\nC[tag]::C[tag]()\n{\n\tthis->my_init();\n}\n"
#endif