# ifndef TEMP_DEF_H
#define TEMP_DEF_H

#define MAIN_TEMP  "#ifndef [TAG]_TEST\n#define [TAG]_TEST 0//1\n#endif\n\n#if [TAG]_TEST\nint main(int argc, char *argv[])\n{\n\treturn 0;\n}\n#endif ";
#define CLASS_H_TEMP	"#ifndef [TAG]_H\n#define [TAG]_H\n\n#include \"object.h\"\n\nnamespace n_[tag] {\n\tclass C[tag] :public Object\n\t{\n\tpublic:\n\t\tC[tag]();\n\t};\n}\n\nusing namespace n_[tag];\n\n#endif\n"

#endif