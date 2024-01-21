
// Generated from fs.g4 by ANTLR 4.13.1


#include "parser/fsVisitor.h"

#include "parser/fsParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct FsParserStaticData final {
  FsParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  FsParserStaticData(const FsParserStaticData&) = delete;
  FsParserStaticData(FsParserStaticData&&) = delete;
  FsParserStaticData& operator=(const FsParserStaticData&) = delete;
  FsParserStaticData& operator=(FsParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag fsParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
FsParserStaticData *fsParserStaticData = nullptr;

void fsParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (fsParserStaticData != nullptr) {
    return;
  }
#else
  assert(fsParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<FsParserStaticData>(
    std::vector<std::string>{
      "start", "expr", "ternaryExpr", "binaryExpr", "var_assign", "or_op", 
      "is_not_op", "isnt_op", "and_op", "gt_op", "add_op", "mul_op", "exponent_op", 
      "unaryExpr", "func_call", "params", "param", "var_decl", "container_items", 
      "container", "map_pairs", "map", "stmt", "def_params", "class_create_stmt", 
      "constructor_body", "class_constructor_init", "class_object_init", 
      "class_thisExpr", "class_override_stmt", "class_overload_stmt", "class_abstract_stmt", 
      "class_body", "delete_stmt", "return_stmt", "mut_stmt", "const_stmt", 
      "func_body", "func_def", "cond_stmt", "sub_cond_stmt", "else_if_stmt", 
      "loop_stmt", "flow_body", "import_stmt", "define_stmt", "member_access", 
      "typeobject", "object"
    },
    std::vector<std::string>{
      "", "", "", "", "'nil'", "'abstract'", "'allow'", "'and'", "'break'", 
      "'class'", "'const'", "'continue'", "'constructor'", "'decl'", "'define'", 
      "'delete'", "'do'", "'else'", "'end'", "'func'", "'if'", "'ignore'", 
      "'include'", "'inherits'", "'is'", "'isnt'", "'loop'", "'mut'", "'new'", 
      "'not'", "'or'", "'overload'", "'override'", "'then'", "'this'", "'return'", 
      "", "'('", "')'", "'['", "']'", "'{'", "'}'", "'='", "'>'", "'>='", 
      "'<'", "'<='", "'+'", "'-'", "'*'", "'/'", "'%'", "','", "':'", "'.'", 
      "'++'", "'--'", "'**'", "'//'"
    },
    std::vector<std::string>{
      "", "STRING", "NUMBER", "BOOL", "NIL", "ABSTRACT", "ALLOW", "AND", 
      "BREAK", "CLASS", "CONST", "CONTINUE", "CONSTRUCTOR", "DECL", "DEFINE", 
      "DELETE", "DO", "ELSE", "END", "FUNC", "IF", "IGNORE", "INCLUDE", 
      "INHERITS", "IS", "ISNT", "LOOP", "MUT", "NEW", "NOT", "OR", "OVERLOAD", 
      "OVERRIDE", "THEN", "THIS", "RETURN", "IDEN", "LOPAREN", "ROPAREN", 
      "LCPAREN", "RCPAREN", "LPAREN", "RPAREN", "EQUALS_TO", "GT", "GTE", 
      "LT", "LTE", "PLUS", "MINUS", "STAR", "SLASH", "PERCENT", "COMMA", 
      "COLON", "DOT", "INCREMENT", "DECREMENT", "POWER", "FLOOR", "EOT", 
      "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,61,562,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,1,0,1,
  	0,3,0,101,8,0,1,0,4,0,104,8,0,11,0,12,0,105,4,0,108,8,0,11,0,12,0,109,
  	1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,121,8,2,1,3,1,3,1,3,1,3,3,3,127,
  	8,3,1,4,1,4,3,4,131,8,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,5,5,142,8,
  	5,10,5,12,5,145,9,5,1,6,1,6,1,6,1,6,1,6,1,6,5,6,153,8,6,10,6,12,6,156,
  	9,6,1,7,1,7,1,7,1,7,1,7,1,7,5,7,164,8,7,10,7,12,7,167,9,7,1,8,1,8,1,8,
  	1,8,1,8,1,8,5,8,175,8,8,10,8,12,8,178,9,8,1,9,1,9,1,9,1,9,1,9,1,9,5,9,
  	186,8,9,10,9,12,9,189,9,9,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,
  	5,10,200,8,10,10,10,12,10,203,9,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,
  	1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,5,11,220,8,11,10,11,12,11,223,
  	9,11,1,12,1,12,1,12,1,12,1,12,1,12,5,12,231,8,12,10,12,12,12,234,9,12,
  	1,13,1,13,1,13,1,13,1,13,4,13,241,8,13,11,13,12,13,242,1,13,1,13,1,13,
  	3,13,248,8,13,1,13,1,13,1,13,1,13,1,13,1,13,3,13,256,8,13,1,14,1,14,1,
  	14,3,14,261,8,14,1,14,1,14,1,14,1,14,1,14,3,14,268,8,14,1,15,1,15,1,15,
  	5,15,273,8,15,10,15,12,15,276,9,15,1,16,1,16,1,17,1,17,1,17,1,18,1,18,
  	1,18,5,18,286,8,18,10,18,12,18,289,9,18,1,19,1,19,3,19,293,8,19,1,19,
  	1,19,1,20,1,20,1,20,1,20,1,20,5,20,302,8,20,10,20,12,20,305,9,20,1,21,
  	1,21,3,21,309,8,21,1,21,1,21,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,
  	1,22,1,22,1,22,1,22,1,22,3,22,326,8,22,1,23,1,23,1,23,5,23,331,8,23,10,
  	23,12,23,334,9,23,1,24,1,24,1,24,1,24,3,24,340,8,24,1,24,3,24,343,8,24,
  	1,24,1,24,1,25,1,25,3,25,349,8,25,1,25,4,25,352,8,25,11,25,12,25,353,
  	1,25,3,25,357,8,25,1,26,1,26,1,26,3,26,362,8,26,1,26,1,26,3,26,366,8,
  	26,1,26,1,26,1,27,1,27,1,27,1,27,3,27,374,8,27,1,27,1,27,1,28,1,28,1,
  	28,1,28,1,29,1,29,1,29,1,30,1,30,1,30,1,30,1,30,1,31,1,31,1,31,3,31,393,
  	8,31,1,32,1,32,1,32,1,32,1,32,1,32,3,32,401,8,32,1,32,4,32,404,8,32,11,
  	32,12,32,405,1,32,5,32,409,8,32,10,32,12,32,412,9,32,1,33,1,33,1,33,1,
  	34,1,34,1,34,1,35,1,35,1,35,1,36,1,36,1,36,1,37,1,37,3,37,428,8,37,1,
  	37,4,37,431,8,37,11,37,12,37,432,4,37,435,8,37,11,37,12,37,436,1,38,1,
  	38,1,38,1,38,3,38,443,8,38,1,38,1,38,4,38,447,8,38,11,38,12,38,448,1,
  	38,3,38,452,8,38,3,38,454,8,38,1,38,1,38,1,39,1,39,1,39,1,39,4,39,462,
  	8,39,11,39,12,39,463,1,39,3,39,467,8,39,3,39,469,8,39,1,39,4,39,472,8,
  	39,11,39,12,39,473,1,39,3,39,477,8,39,3,39,479,8,39,1,39,1,39,1,40,1,
  	40,1,40,1,40,1,40,3,40,488,8,40,3,40,490,8,40,1,41,1,41,1,41,1,41,1,41,
  	3,41,497,8,41,1,41,4,41,500,8,41,11,41,12,41,501,4,41,504,8,41,11,41,
  	12,41,505,1,42,1,42,1,42,4,42,511,8,42,11,42,12,42,512,1,42,3,42,516,
  	8,42,3,42,518,8,42,1,42,1,42,1,43,1,43,3,43,524,8,43,1,43,4,43,527,8,
  	43,11,43,12,43,528,4,43,531,8,43,11,43,12,43,532,1,44,1,44,1,44,1,45,
  	1,45,1,45,1,45,3,45,542,8,45,1,46,1,46,3,46,546,8,46,1,46,1,46,4,46,550,
  	8,46,11,46,12,46,551,1,47,1,47,1,48,1,48,1,48,1,48,3,48,560,8,48,1,48,
  	0,8,10,12,14,16,18,20,22,24,49,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,
  	30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,
  	76,78,80,82,84,86,88,90,92,94,96,0,5,2,0,24,24,29,29,1,0,44,47,1,0,48,
  	49,2,0,1,1,36,36,1,0,1,4,607,0,107,1,0,0,0,2,111,1,0,0,0,4,120,1,0,0,
  	0,6,126,1,0,0,0,8,130,1,0,0,0,10,135,1,0,0,0,12,146,1,0,0,0,14,157,1,
  	0,0,0,16,168,1,0,0,0,18,179,1,0,0,0,20,190,1,0,0,0,22,204,1,0,0,0,24,
  	224,1,0,0,0,26,255,1,0,0,0,28,267,1,0,0,0,30,269,1,0,0,0,32,277,1,0,0,
  	0,34,279,1,0,0,0,36,282,1,0,0,0,38,290,1,0,0,0,40,296,1,0,0,0,42,306,
  	1,0,0,0,44,325,1,0,0,0,46,327,1,0,0,0,48,335,1,0,0,0,50,348,1,0,0,0,52,
  	358,1,0,0,0,54,369,1,0,0,0,56,377,1,0,0,0,58,381,1,0,0,0,60,384,1,0,0,
  	0,62,389,1,0,0,0,64,400,1,0,0,0,66,413,1,0,0,0,68,416,1,0,0,0,70,419,
  	1,0,0,0,72,422,1,0,0,0,74,434,1,0,0,0,76,438,1,0,0,0,78,457,1,0,0,0,80,
  	489,1,0,0,0,82,503,1,0,0,0,84,507,1,0,0,0,86,530,1,0,0,0,88,534,1,0,0,
  	0,90,537,1,0,0,0,92,545,1,0,0,0,94,553,1,0,0,0,96,559,1,0,0,0,98,101,
  	3,2,1,0,99,101,3,44,22,0,100,98,1,0,0,0,100,99,1,0,0,0,101,103,1,0,0,
  	0,102,104,5,60,0,0,103,102,1,0,0,0,104,105,1,0,0,0,105,103,1,0,0,0,105,
  	106,1,0,0,0,106,108,1,0,0,0,107,100,1,0,0,0,108,109,1,0,0,0,109,107,1,
  	0,0,0,109,110,1,0,0,0,110,1,1,0,0,0,111,112,3,4,2,0,112,3,1,0,0,0,113,
  	121,3,6,3,0,114,115,3,6,3,0,115,116,5,20,0,0,116,117,3,4,2,0,117,118,
  	5,17,0,0,118,119,3,4,2,0,119,121,1,0,0,0,120,113,1,0,0,0,120,114,1,0,
  	0,0,121,5,1,0,0,0,122,127,3,8,4,0,123,127,3,92,46,0,124,127,3,56,28,0,
  	125,127,3,10,5,0,126,122,1,0,0,0,126,123,1,0,0,0,126,124,1,0,0,0,126,
  	125,1,0,0,0,127,7,1,0,0,0,128,131,5,36,0,0,129,131,3,56,28,0,130,128,
  	1,0,0,0,130,129,1,0,0,0,131,132,1,0,0,0,132,133,5,43,0,0,133,134,3,4,
  	2,0,134,9,1,0,0,0,135,136,6,5,-1,0,136,137,3,12,6,0,137,143,1,0,0,0,138,
  	139,10,1,0,0,139,140,5,30,0,0,140,142,3,12,6,0,141,138,1,0,0,0,142,145,
  	1,0,0,0,143,141,1,0,0,0,143,144,1,0,0,0,144,11,1,0,0,0,145,143,1,0,0,
  	0,146,147,6,6,-1,0,147,148,3,14,7,0,148,154,1,0,0,0,149,150,10,1,0,0,
  	150,151,7,0,0,0,151,153,3,14,7,0,152,149,1,0,0,0,153,156,1,0,0,0,154,
  	152,1,0,0,0,154,155,1,0,0,0,155,13,1,0,0,0,156,154,1,0,0,0,157,158,6,
  	7,-1,0,158,159,3,16,8,0,159,165,1,0,0,0,160,161,10,1,0,0,161,162,5,25,
  	0,0,162,164,3,16,8,0,163,160,1,0,0,0,164,167,1,0,0,0,165,163,1,0,0,0,
  	165,166,1,0,0,0,166,15,1,0,0,0,167,165,1,0,0,0,168,169,6,8,-1,0,169,170,
  	3,18,9,0,170,176,1,0,0,0,171,172,10,1,0,0,172,173,5,7,0,0,173,175,3,18,
  	9,0,174,171,1,0,0,0,175,178,1,0,0,0,176,174,1,0,0,0,176,177,1,0,0,0,177,
  	17,1,0,0,0,178,176,1,0,0,0,179,180,6,9,-1,0,180,181,3,20,10,0,181,187,
  	1,0,0,0,182,183,10,1,0,0,183,184,7,1,0,0,184,186,3,20,10,0,185,182,1,
  	0,0,0,186,189,1,0,0,0,187,185,1,0,0,0,187,188,1,0,0,0,188,19,1,0,0,0,
  	189,187,1,0,0,0,190,191,6,10,-1,0,191,192,3,22,11,0,192,201,1,0,0,0,193,
  	194,10,2,0,0,194,195,5,48,0,0,195,200,3,22,11,0,196,197,10,1,0,0,197,
  	198,5,49,0,0,198,200,3,22,11,0,199,193,1,0,0,0,199,196,1,0,0,0,200,203,
  	1,0,0,0,201,199,1,0,0,0,201,202,1,0,0,0,202,21,1,0,0,0,203,201,1,0,0,
  	0,204,205,6,11,-1,0,205,206,3,24,12,0,206,221,1,0,0,0,207,208,10,4,0,
  	0,208,209,5,50,0,0,209,220,3,24,12,0,210,211,10,3,0,0,211,212,5,51,0,
  	0,212,220,3,24,12,0,213,214,10,2,0,0,214,215,5,59,0,0,215,220,3,24,12,
  	0,216,217,10,1,0,0,217,218,5,52,0,0,218,220,3,24,12,0,219,207,1,0,0,0,
  	219,210,1,0,0,0,219,213,1,0,0,0,219,216,1,0,0,0,220,223,1,0,0,0,221,219,
  	1,0,0,0,221,222,1,0,0,0,222,23,1,0,0,0,223,221,1,0,0,0,224,225,6,12,-1,
  	0,225,226,3,26,13,0,226,232,1,0,0,0,227,228,10,1,0,0,228,229,5,58,0,0,
  	229,231,3,26,13,0,230,227,1,0,0,0,231,234,1,0,0,0,232,230,1,0,0,0,232,
  	233,1,0,0,0,233,25,1,0,0,0,234,232,1,0,0,0,235,256,3,96,48,0,236,256,
  	3,28,14,0,237,256,3,34,17,0,238,256,3,54,27,0,239,241,7,2,0,0,240,239,
  	1,0,0,0,241,242,1,0,0,0,242,240,1,0,0,0,242,243,1,0,0,0,243,247,1,0,0,
  	0,244,248,3,26,13,0,245,248,3,6,3,0,246,248,3,4,2,0,247,244,1,0,0,0,247,
  	245,1,0,0,0,247,246,1,0,0,0,248,256,1,0,0,0,249,250,5,50,0,0,250,256,
  	3,4,2,0,251,252,5,37,0,0,252,253,3,4,2,0,253,254,5,38,0,0,254,256,1,0,
  	0,0,255,235,1,0,0,0,255,236,1,0,0,0,255,237,1,0,0,0,255,238,1,0,0,0,255,
  	240,1,0,0,0,255,249,1,0,0,0,255,251,1,0,0,0,256,27,1,0,0,0,257,258,3,
  	96,48,0,258,260,5,37,0,0,259,261,3,30,15,0,260,259,1,0,0,0,260,261,1,
  	0,0,0,261,262,1,0,0,0,262,263,5,38,0,0,263,268,1,0,0,0,264,265,3,96,48,
  	0,265,266,3,30,15,0,266,268,1,0,0,0,267,257,1,0,0,0,267,264,1,0,0,0,268,
  	29,1,0,0,0,269,274,3,32,16,0,270,271,5,53,0,0,271,273,3,32,16,0,272,270,
  	1,0,0,0,273,276,1,0,0,0,274,272,1,0,0,0,274,275,1,0,0,0,275,31,1,0,0,
  	0,276,274,1,0,0,0,277,278,3,4,2,0,278,33,1,0,0,0,279,280,5,13,0,0,280,
  	281,5,36,0,0,281,35,1,0,0,0,282,287,3,4,2,0,283,284,5,53,0,0,284,286,
  	3,36,18,0,285,283,1,0,0,0,286,289,1,0,0,0,287,285,1,0,0,0,287,288,1,0,
  	0,0,288,37,1,0,0,0,289,287,1,0,0,0,290,292,5,39,0,0,291,293,3,36,18,0,
  	292,291,1,0,0,0,292,293,1,0,0,0,293,294,1,0,0,0,294,295,5,40,0,0,295,
  	39,1,0,0,0,296,297,5,1,0,0,297,298,5,54,0,0,298,303,3,4,2,0,299,300,5,
  	53,0,0,300,302,3,40,20,0,301,299,1,0,0,0,302,305,1,0,0,0,303,301,1,0,
  	0,0,303,304,1,0,0,0,304,41,1,0,0,0,305,303,1,0,0,0,306,308,5,41,0,0,307,
  	309,3,40,20,0,308,307,1,0,0,0,308,309,1,0,0,0,309,310,1,0,0,0,310,311,
  	5,42,0,0,311,43,1,0,0,0,312,326,5,8,0,0,313,326,5,11,0,0,314,326,5,21,
  	0,0,315,326,3,76,38,0,316,326,3,48,24,0,317,326,3,78,39,0,318,326,3,84,
  	42,0,319,326,3,88,44,0,320,326,3,70,35,0,321,326,3,72,36,0,322,326,3,
  	66,33,0,323,326,3,68,34,0,324,326,3,90,45,0,325,312,1,0,0,0,325,313,1,
  	0,0,0,325,314,1,0,0,0,325,315,1,0,0,0,325,316,1,0,0,0,325,317,1,0,0,0,
  	325,318,1,0,0,0,325,319,1,0,0,0,325,320,1,0,0,0,325,321,1,0,0,0,325,322,
  	1,0,0,0,325,323,1,0,0,0,325,324,1,0,0,0,326,45,1,0,0,0,327,332,5,36,0,
  	0,328,329,5,53,0,0,329,331,3,46,23,0,330,328,1,0,0,0,331,334,1,0,0,0,
  	332,330,1,0,0,0,332,333,1,0,0,0,333,47,1,0,0,0,334,332,1,0,0,0,335,336,
  	5,9,0,0,336,339,5,36,0,0,337,338,5,23,0,0,338,340,5,36,0,0,339,337,1,
  	0,0,0,339,340,1,0,0,0,340,342,1,0,0,0,341,343,3,64,32,0,342,341,1,0,0,
  	0,342,343,1,0,0,0,343,344,1,0,0,0,344,345,5,18,0,0,345,49,1,0,0,0,346,
  	349,3,4,2,0,347,349,3,44,22,0,348,346,1,0,0,0,348,347,1,0,0,0,349,351,
  	1,0,0,0,350,352,5,60,0,0,351,350,1,0,0,0,352,353,1,0,0,0,353,351,1,0,
  	0,0,353,354,1,0,0,0,354,356,1,0,0,0,355,357,3,50,25,0,356,355,1,0,0,0,
  	356,357,1,0,0,0,357,51,1,0,0,0,358,359,5,12,0,0,359,361,5,37,0,0,360,
  	362,3,46,23,0,361,360,1,0,0,0,361,362,1,0,0,0,362,363,1,0,0,0,363,365,
  	5,38,0,0,364,366,3,50,25,0,365,364,1,0,0,0,365,366,1,0,0,0,366,367,1,
  	0,0,0,367,368,5,18,0,0,368,53,1,0,0,0,369,370,5,28,0,0,370,371,3,96,48,
  	0,371,373,5,37,0,0,372,374,3,30,15,0,373,372,1,0,0,0,373,374,1,0,0,0,
  	374,375,1,0,0,0,375,376,5,38,0,0,376,55,1,0,0,0,377,378,5,34,0,0,378,
  	379,5,55,0,0,379,380,3,4,2,0,380,57,1,0,0,0,381,382,5,32,0,0,382,383,
  	3,76,38,0,383,59,1,0,0,0,384,385,5,31,0,0,385,386,5,37,0,0,386,387,3,
  	76,38,0,387,388,5,38,0,0,388,61,1,0,0,0,389,392,5,5,0,0,390,393,3,76,
  	38,0,391,393,3,34,17,0,392,390,1,0,0,0,392,391,1,0,0,0,393,63,1,0,0,0,
  	394,401,3,52,26,0,395,401,3,76,38,0,396,401,3,34,17,0,397,401,3,58,29,
  	0,398,401,3,60,30,0,399,401,3,62,31,0,400,394,1,0,0,0,400,395,1,0,0,0,
  	400,396,1,0,0,0,400,397,1,0,0,0,400,398,1,0,0,0,400,399,1,0,0,0,401,410,
  	1,0,0,0,402,404,5,60,0,0,403,402,1,0,0,0,404,405,1,0,0,0,405,403,1,0,
  	0,0,405,406,1,0,0,0,406,407,1,0,0,0,407,409,3,64,32,0,408,403,1,0,0,0,
  	409,412,1,0,0,0,410,408,1,0,0,0,410,411,1,0,0,0,411,65,1,0,0,0,412,410,
  	1,0,0,0,413,414,5,15,0,0,414,415,5,36,0,0,415,67,1,0,0,0,416,417,5,35,
  	0,0,417,418,3,2,1,0,418,69,1,0,0,0,419,420,5,27,0,0,420,421,3,44,22,0,
  	421,71,1,0,0,0,422,423,5,10,0,0,423,424,3,44,22,0,424,73,1,0,0,0,425,
  	428,3,4,2,0,426,428,3,44,22,0,427,425,1,0,0,0,427,426,1,0,0,0,428,430,
  	1,0,0,0,429,431,5,60,0,0,430,429,1,0,0,0,431,432,1,0,0,0,432,430,1,0,
  	0,0,432,433,1,0,0,0,433,435,1,0,0,0,434,427,1,0,0,0,435,436,1,0,0,0,436,
  	434,1,0,0,0,436,437,1,0,0,0,437,75,1,0,0,0,438,439,5,19,0,0,439,440,5,
  	36,0,0,440,442,5,37,0,0,441,443,3,46,23,0,442,441,1,0,0,0,442,443,1,0,
  	0,0,443,444,1,0,0,0,444,453,5,38,0,0,445,447,5,60,0,0,446,445,1,0,0,0,
  	447,448,1,0,0,0,448,446,1,0,0,0,448,449,1,0,0,0,449,451,1,0,0,0,450,452,
  	3,74,37,0,451,450,1,0,0,0,451,452,1,0,0,0,452,454,1,0,0,0,453,446,1,0,
  	0,0,453,454,1,0,0,0,454,455,1,0,0,0,455,456,5,18,0,0,456,77,1,0,0,0,457,
  	458,5,20,0,0,458,459,3,2,1,0,459,468,5,33,0,0,460,462,5,60,0,0,461,460,
  	1,0,0,0,462,463,1,0,0,0,463,461,1,0,0,0,463,464,1,0,0,0,464,466,1,0,0,
  	0,465,467,3,86,43,0,466,465,1,0,0,0,466,467,1,0,0,0,467,469,1,0,0,0,468,
  	461,1,0,0,0,468,469,1,0,0,0,469,478,1,0,0,0,470,472,5,60,0,0,471,470,
  	1,0,0,0,472,473,1,0,0,0,473,471,1,0,0,0,473,474,1,0,0,0,474,476,1,0,0,
  	0,475,477,3,80,40,0,476,475,1,0,0,0,476,477,1,0,0,0,477,479,1,0,0,0,478,
  	471,1,0,0,0,478,479,1,0,0,0,479,480,1,0,0,0,480,481,5,18,0,0,481,79,1,
  	0,0,0,482,490,3,82,41,0,483,484,5,17,0,0,484,485,3,2,1,0,485,487,5,33,
  	0,0,486,488,3,86,43,0,487,486,1,0,0,0,487,488,1,0,0,0,488,490,1,0,0,0,
  	489,482,1,0,0,0,489,483,1,0,0,0,490,81,1,0,0,0,491,492,5,17,0,0,492,493,
  	5,20,0,0,493,494,3,2,1,0,494,496,5,33,0,0,495,497,3,86,43,0,496,495,1,
  	0,0,0,496,497,1,0,0,0,497,499,1,0,0,0,498,500,5,60,0,0,499,498,1,0,0,
  	0,500,501,1,0,0,0,501,499,1,0,0,0,501,502,1,0,0,0,502,504,1,0,0,0,503,
  	491,1,0,0,0,504,505,1,0,0,0,505,503,1,0,0,0,505,506,1,0,0,0,506,83,1,
  	0,0,0,507,508,5,26,0,0,508,517,5,16,0,0,509,511,5,60,0,0,510,509,1,0,
  	0,0,511,512,1,0,0,0,512,510,1,0,0,0,512,513,1,0,0,0,513,515,1,0,0,0,514,
  	516,3,86,43,0,515,514,1,0,0,0,515,516,1,0,0,0,516,518,1,0,0,0,517,510,
  	1,0,0,0,517,518,1,0,0,0,518,519,1,0,0,0,519,520,5,18,0,0,520,85,1,0,0,
  	0,521,524,3,44,22,0,522,524,3,2,1,0,523,521,1,0,0,0,523,522,1,0,0,0,524,
  	526,1,0,0,0,525,527,5,60,0,0,526,525,1,0,0,0,527,528,1,0,0,0,528,526,
  	1,0,0,0,528,529,1,0,0,0,529,531,1,0,0,0,530,523,1,0,0,0,531,532,1,0,0,
  	0,532,530,1,0,0,0,532,533,1,0,0,0,533,87,1,0,0,0,534,535,5,22,0,0,535,
  	536,7,3,0,0,536,89,1,0,0,0,537,538,5,14,0,0,538,541,5,36,0,0,539,542,
  	3,2,1,0,540,542,3,44,22,0,541,539,1,0,0,0,541,540,1,0,0,0,542,91,1,0,
  	0,0,543,546,3,54,27,0,544,546,5,36,0,0,545,543,1,0,0,0,545,544,1,0,0,
  	0,546,549,1,0,0,0,547,548,5,55,0,0,548,550,3,4,2,0,549,547,1,0,0,0,550,
  	551,1,0,0,0,551,549,1,0,0,0,551,552,1,0,0,0,552,93,1,0,0,0,553,554,7,
  	4,0,0,554,95,1,0,0,0,555,560,3,94,47,0,556,560,3,38,19,0,557,560,3,42,
  	21,0,558,560,5,36,0,0,559,555,1,0,0,0,559,556,1,0,0,0,559,557,1,0,0,0,
  	559,558,1,0,0,0,560,97,1,0,0,0,68,100,105,109,120,126,130,143,154,165,
  	176,187,199,201,219,221,232,242,247,255,260,267,274,287,292,303,308,325,
  	332,339,342,348,353,356,361,365,373,392,400,405,410,427,432,436,442,448,
  	451,453,463,466,468,473,476,478,487,489,496,501,505,512,515,517,523,528,
  	532,541,545,551,559
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  fsParserStaticData = staticData.release();
}

}

fsParser::fsParser(TokenStream *input) : fsParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

fsParser::fsParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  fsParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *fsParserStaticData->atn, fsParserStaticData->decisionToDFA, fsParserStaticData->sharedContextCache, options);
}

fsParser::~fsParser() {
  delete _interpreter;
}

const atn::ATN& fsParser::getATN() const {
  return *fsParserStaticData->atn;
}

std::string fsParser::getGrammarFileName() const {
  return "fs.g4";
}

const std::vector<std::string>& fsParser::getRuleNames() const {
  return fsParserStaticData->ruleNames;
}

const dfa::Vocabulary& fsParser::getVocabulary() const {
  return fsParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView fsParser::getSerializedATN() const {
  return fsParserStaticData->serializedATN;
}


//----------------- StartContext ------------------------------------------------------------------

fsParser::StartContext::StartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<fsParser::ExprContext *> fsParser::StartContext::expr() {
  return getRuleContexts<fsParser::ExprContext>();
}

fsParser::ExprContext* fsParser::StartContext::expr(size_t i) {
  return getRuleContext<fsParser::ExprContext>(i);
}

std::vector<fsParser::StmtContext *> fsParser::StartContext::stmt() {
  return getRuleContexts<fsParser::StmtContext>();
}

fsParser::StmtContext* fsParser::StartContext::stmt(size_t i) {
  return getRuleContext<fsParser::StmtContext>(i);
}

std::vector<tree::TerminalNode *> fsParser::StartContext::EOT() {
  return getTokens(fsParser::EOT);
}

tree::TerminalNode* fsParser::StartContext::EOT(size_t i) {
  return getToken(fsParser::EOT, i);
}


size_t fsParser::StartContext::getRuleIndex() const {
  return fsParser::RuleStart;
}


std::any fsParser::StartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitStart(this);
  else
    return visitor->visitChildren(this);
}

fsParser::StartContext* fsParser::start() {
  StartContext *_localctx = _tracker.createInstance<StartContext>(_ctx, getState());
  enterRule(_localctx, 0, fsParser::RuleStart);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(107); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(100);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case fsParser::STRING:
        case fsParser::NUMBER:
        case fsParser::BOOL:
        case fsParser::NIL:
        case fsParser::DECL:
        case fsParser::NEW:
        case fsParser::THIS:
        case fsParser::IDEN:
        case fsParser::LOPAREN:
        case fsParser::LCPAREN:
        case fsParser::LPAREN:
        case fsParser::PLUS:
        case fsParser::MINUS:
        case fsParser::STAR: {
          setState(98);
          expr();
          break;
        }

        case fsParser::BREAK:
        case fsParser::CLASS:
        case fsParser::CONST:
        case fsParser::CONTINUE:
        case fsParser::DEFINE:
        case fsParser::DELETE:
        case fsParser::FUNC:
        case fsParser::IF:
        case fsParser::IGNORE:
        case fsParser::INCLUDE:
        case fsParser::LOOP:
        case fsParser::MUT:
        case fsParser::RETURN: {
          setState(99);
          stmt();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(103); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(102);
        match(fsParser::EOT);
        setState(105); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == fsParser::EOT);
      setState(109); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1973331791769374) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

fsParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fsParser::TernaryExprContext* fsParser::ExprContext::ternaryExpr() {
  return getRuleContext<fsParser::TernaryExprContext>(0);
}


size_t fsParser::ExprContext::getRuleIndex() const {
  return fsParser::RuleExpr;
}


std::any fsParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}

fsParser::ExprContext* fsParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 2, fsParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(111);
    ternaryExpr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TernaryExprContext ------------------------------------------------------------------

fsParser::TernaryExprContext::TernaryExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fsParser::BinaryExprContext* fsParser::TernaryExprContext::binaryExpr() {
  return getRuleContext<fsParser::BinaryExprContext>(0);
}

tree::TerminalNode* fsParser::TernaryExprContext::IF() {
  return getToken(fsParser::IF, 0);
}

std::vector<fsParser::TernaryExprContext *> fsParser::TernaryExprContext::ternaryExpr() {
  return getRuleContexts<fsParser::TernaryExprContext>();
}

fsParser::TernaryExprContext* fsParser::TernaryExprContext::ternaryExpr(size_t i) {
  return getRuleContext<fsParser::TernaryExprContext>(i);
}

tree::TerminalNode* fsParser::TernaryExprContext::ELSE() {
  return getToken(fsParser::ELSE, 0);
}


size_t fsParser::TernaryExprContext::getRuleIndex() const {
  return fsParser::RuleTernaryExpr;
}


std::any fsParser::TernaryExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitTernaryExpr(this);
  else
    return visitor->visitChildren(this);
}

fsParser::TernaryExprContext* fsParser::ternaryExpr() {
  TernaryExprContext *_localctx = _tracker.createInstance<TernaryExprContext>(_ctx, getState());
  enterRule(_localctx, 4, fsParser::RuleTernaryExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(120);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(113);
      binaryExpr();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(114);
      binaryExpr();
      setState(115);
      match(fsParser::IF);
      setState(116);
      ternaryExpr();
      setState(117);
      match(fsParser::ELSE);
      setState(118);
      ternaryExpr();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BinaryExprContext ------------------------------------------------------------------

fsParser::BinaryExprContext::BinaryExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fsParser::Var_assignContext* fsParser::BinaryExprContext::var_assign() {
  return getRuleContext<fsParser::Var_assignContext>(0);
}

fsParser::Member_accessContext* fsParser::BinaryExprContext::member_access() {
  return getRuleContext<fsParser::Member_accessContext>(0);
}

fsParser::Class_thisExprContext* fsParser::BinaryExprContext::class_thisExpr() {
  return getRuleContext<fsParser::Class_thisExprContext>(0);
}

fsParser::Or_opContext* fsParser::BinaryExprContext::or_op() {
  return getRuleContext<fsParser::Or_opContext>(0);
}


size_t fsParser::BinaryExprContext::getRuleIndex() const {
  return fsParser::RuleBinaryExpr;
}


std::any fsParser::BinaryExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitBinaryExpr(this);
  else
    return visitor->visitChildren(this);
}

fsParser::BinaryExprContext* fsParser::binaryExpr() {
  BinaryExprContext *_localctx = _tracker.createInstance<BinaryExprContext>(_ctx, getState());
  enterRule(_localctx, 6, fsParser::RuleBinaryExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(126);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(122);
      var_assign();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(123);
      member_access();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(124);
      class_thisExpr();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(125);
      or_op(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_assignContext ------------------------------------------------------------------

fsParser::Var_assignContext::Var_assignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fsParser::Var_assignContext::EQUALS_TO() {
  return getToken(fsParser::EQUALS_TO, 0);
}

fsParser::TernaryExprContext* fsParser::Var_assignContext::ternaryExpr() {
  return getRuleContext<fsParser::TernaryExprContext>(0);
}

tree::TerminalNode* fsParser::Var_assignContext::IDEN() {
  return getToken(fsParser::IDEN, 0);
}

fsParser::Class_thisExprContext* fsParser::Var_assignContext::class_thisExpr() {
  return getRuleContext<fsParser::Class_thisExprContext>(0);
}


size_t fsParser::Var_assignContext::getRuleIndex() const {
  return fsParser::RuleVar_assign;
}


std::any fsParser::Var_assignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitVar_assign(this);
  else
    return visitor->visitChildren(this);
}

fsParser::Var_assignContext* fsParser::var_assign() {
  Var_assignContext *_localctx = _tracker.createInstance<Var_assignContext>(_ctx, getState());
  enterRule(_localctx, 8, fsParser::RuleVar_assign);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(130);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case fsParser::IDEN: {
        setState(128);
        match(fsParser::IDEN);
        break;
      }

      case fsParser::THIS: {
        setState(129);
        class_thisExpr();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(132);
    match(fsParser::EQUALS_TO);
    setState(133);
    ternaryExpr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Or_opContext ------------------------------------------------------------------

fsParser::Or_opContext::Or_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fsParser::Is_not_opContext* fsParser::Or_opContext::is_not_op() {
  return getRuleContext<fsParser::Is_not_opContext>(0);
}

fsParser::Or_opContext* fsParser::Or_opContext::or_op() {
  return getRuleContext<fsParser::Or_opContext>(0);
}

tree::TerminalNode* fsParser::Or_opContext::OR() {
  return getToken(fsParser::OR, 0);
}


size_t fsParser::Or_opContext::getRuleIndex() const {
  return fsParser::RuleOr_op;
}


std::any fsParser::Or_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitOr_op(this);
  else
    return visitor->visitChildren(this);
}


fsParser::Or_opContext* fsParser::or_op() {
   return or_op(0);
}

fsParser::Or_opContext* fsParser::or_op(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  fsParser::Or_opContext *_localctx = _tracker.createInstance<Or_opContext>(_ctx, parentState);
  fsParser::Or_opContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 10;
  enterRecursionRule(_localctx, 10, fsParser::RuleOr_op, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(136);
    is_not_op(0);
    _ctx->stop = _input->LT(-1);
    setState(143);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Or_opContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleOr_op);
        setState(138);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(139);
        match(fsParser::OR);
        setState(140);
        is_not_op(0); 
      }
      setState(145);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Is_not_opContext ------------------------------------------------------------------

fsParser::Is_not_opContext::Is_not_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fsParser::Isnt_opContext* fsParser::Is_not_opContext::isnt_op() {
  return getRuleContext<fsParser::Isnt_opContext>(0);
}

fsParser::Is_not_opContext* fsParser::Is_not_opContext::is_not_op() {
  return getRuleContext<fsParser::Is_not_opContext>(0);
}

tree::TerminalNode* fsParser::Is_not_opContext::IS() {
  return getToken(fsParser::IS, 0);
}

tree::TerminalNode* fsParser::Is_not_opContext::NOT() {
  return getToken(fsParser::NOT, 0);
}


size_t fsParser::Is_not_opContext::getRuleIndex() const {
  return fsParser::RuleIs_not_op;
}


std::any fsParser::Is_not_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitIs_not_op(this);
  else
    return visitor->visitChildren(this);
}


fsParser::Is_not_opContext* fsParser::is_not_op() {
   return is_not_op(0);
}

fsParser::Is_not_opContext* fsParser::is_not_op(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  fsParser::Is_not_opContext *_localctx = _tracker.createInstance<Is_not_opContext>(_ctx, parentState);
  fsParser::Is_not_opContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 12;
  enterRecursionRule(_localctx, 12, fsParser::RuleIs_not_op, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(147);
    isnt_op(0);
    _ctx->stop = _input->LT(-1);
    setState(154);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Is_not_opContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleIs_not_op);
        setState(149);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(150);
        _la = _input->LA(1);
        if (!(_la == fsParser::IS

        || _la == fsParser::NOT)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(151);
        isnt_op(0); 
      }
      setState(156);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Isnt_opContext ------------------------------------------------------------------

fsParser::Isnt_opContext::Isnt_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fsParser::And_opContext* fsParser::Isnt_opContext::and_op() {
  return getRuleContext<fsParser::And_opContext>(0);
}

fsParser::Isnt_opContext* fsParser::Isnt_opContext::isnt_op() {
  return getRuleContext<fsParser::Isnt_opContext>(0);
}

tree::TerminalNode* fsParser::Isnt_opContext::ISNT() {
  return getToken(fsParser::ISNT, 0);
}


size_t fsParser::Isnt_opContext::getRuleIndex() const {
  return fsParser::RuleIsnt_op;
}


std::any fsParser::Isnt_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitIsnt_op(this);
  else
    return visitor->visitChildren(this);
}


fsParser::Isnt_opContext* fsParser::isnt_op() {
   return isnt_op(0);
}

fsParser::Isnt_opContext* fsParser::isnt_op(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  fsParser::Isnt_opContext *_localctx = _tracker.createInstance<Isnt_opContext>(_ctx, parentState);
  fsParser::Isnt_opContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 14;
  enterRecursionRule(_localctx, 14, fsParser::RuleIsnt_op, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(158);
    and_op(0);
    _ctx->stop = _input->LT(-1);
    setState(165);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Isnt_opContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleIsnt_op);
        setState(160);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(161);
        match(fsParser::ISNT);
        setState(162);
        and_op(0); 
      }
      setState(167);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- And_opContext ------------------------------------------------------------------

fsParser::And_opContext::And_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fsParser::Gt_opContext* fsParser::And_opContext::gt_op() {
  return getRuleContext<fsParser::Gt_opContext>(0);
}

fsParser::And_opContext* fsParser::And_opContext::and_op() {
  return getRuleContext<fsParser::And_opContext>(0);
}

tree::TerminalNode* fsParser::And_opContext::AND() {
  return getToken(fsParser::AND, 0);
}


size_t fsParser::And_opContext::getRuleIndex() const {
  return fsParser::RuleAnd_op;
}


std::any fsParser::And_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitAnd_op(this);
  else
    return visitor->visitChildren(this);
}


fsParser::And_opContext* fsParser::and_op() {
   return and_op(0);
}

fsParser::And_opContext* fsParser::and_op(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  fsParser::And_opContext *_localctx = _tracker.createInstance<And_opContext>(_ctx, parentState);
  fsParser::And_opContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 16;
  enterRecursionRule(_localctx, 16, fsParser::RuleAnd_op, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(169);
    gt_op(0);
    _ctx->stop = _input->LT(-1);
    setState(176);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<And_opContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAnd_op);
        setState(171);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(172);
        match(fsParser::AND);
        setState(173);
        gt_op(0); 
      }
      setState(178);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Gt_opContext ------------------------------------------------------------------

fsParser::Gt_opContext::Gt_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fsParser::Add_opContext* fsParser::Gt_opContext::add_op() {
  return getRuleContext<fsParser::Add_opContext>(0);
}

fsParser::Gt_opContext* fsParser::Gt_opContext::gt_op() {
  return getRuleContext<fsParser::Gt_opContext>(0);
}

tree::TerminalNode* fsParser::Gt_opContext::GT() {
  return getToken(fsParser::GT, 0);
}

tree::TerminalNode* fsParser::Gt_opContext::GTE() {
  return getToken(fsParser::GTE, 0);
}

tree::TerminalNode* fsParser::Gt_opContext::LT() {
  return getToken(fsParser::LT, 0);
}

tree::TerminalNode* fsParser::Gt_opContext::LTE() {
  return getToken(fsParser::LTE, 0);
}


size_t fsParser::Gt_opContext::getRuleIndex() const {
  return fsParser::RuleGt_op;
}


std::any fsParser::Gt_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitGt_op(this);
  else
    return visitor->visitChildren(this);
}


fsParser::Gt_opContext* fsParser::gt_op() {
   return gt_op(0);
}

fsParser::Gt_opContext* fsParser::gt_op(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  fsParser::Gt_opContext *_localctx = _tracker.createInstance<Gt_opContext>(_ctx, parentState);
  fsParser::Gt_opContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 18;
  enterRecursionRule(_localctx, 18, fsParser::RuleGt_op, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(180);
    add_op(0);
    _ctx->stop = _input->LT(-1);
    setState(187);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Gt_opContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleGt_op);
        setState(182);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(183);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 263882790666240) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(184);
        add_op(0); 
      }
      setState(189);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Add_opContext ------------------------------------------------------------------

fsParser::Add_opContext::Add_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fsParser::Mul_opContext* fsParser::Add_opContext::mul_op() {
  return getRuleContext<fsParser::Mul_opContext>(0);
}

fsParser::Add_opContext* fsParser::Add_opContext::add_op() {
  return getRuleContext<fsParser::Add_opContext>(0);
}

tree::TerminalNode* fsParser::Add_opContext::PLUS() {
  return getToken(fsParser::PLUS, 0);
}

tree::TerminalNode* fsParser::Add_opContext::MINUS() {
  return getToken(fsParser::MINUS, 0);
}


size_t fsParser::Add_opContext::getRuleIndex() const {
  return fsParser::RuleAdd_op;
}


std::any fsParser::Add_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitAdd_op(this);
  else
    return visitor->visitChildren(this);
}


fsParser::Add_opContext* fsParser::add_op() {
   return add_op(0);
}

fsParser::Add_opContext* fsParser::add_op(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  fsParser::Add_opContext *_localctx = _tracker.createInstance<Add_opContext>(_ctx, parentState);
  fsParser::Add_opContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 20;
  enterRecursionRule(_localctx, 20, fsParser::RuleAdd_op, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(191);
    mul_op(0);
    _ctx->stop = _input->LT(-1);
    setState(201);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(199);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Add_opContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAdd_op);
          setState(193);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(194);
          match(fsParser::PLUS);
          setState(195);
          mul_op(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Add_opContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAdd_op);
          setState(196);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(197);
          match(fsParser::MINUS);
          setState(198);
          mul_op(0);
          break;
        }

        default:
          break;
        } 
      }
      setState(203);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Mul_opContext ------------------------------------------------------------------

fsParser::Mul_opContext::Mul_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fsParser::Exponent_opContext* fsParser::Mul_opContext::exponent_op() {
  return getRuleContext<fsParser::Exponent_opContext>(0);
}

fsParser::Mul_opContext* fsParser::Mul_opContext::mul_op() {
  return getRuleContext<fsParser::Mul_opContext>(0);
}

tree::TerminalNode* fsParser::Mul_opContext::STAR() {
  return getToken(fsParser::STAR, 0);
}

tree::TerminalNode* fsParser::Mul_opContext::SLASH() {
  return getToken(fsParser::SLASH, 0);
}

tree::TerminalNode* fsParser::Mul_opContext::FLOOR() {
  return getToken(fsParser::FLOOR, 0);
}

tree::TerminalNode* fsParser::Mul_opContext::PERCENT() {
  return getToken(fsParser::PERCENT, 0);
}


size_t fsParser::Mul_opContext::getRuleIndex() const {
  return fsParser::RuleMul_op;
}


std::any fsParser::Mul_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitMul_op(this);
  else
    return visitor->visitChildren(this);
}


fsParser::Mul_opContext* fsParser::mul_op() {
   return mul_op(0);
}

fsParser::Mul_opContext* fsParser::mul_op(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  fsParser::Mul_opContext *_localctx = _tracker.createInstance<Mul_opContext>(_ctx, parentState);
  fsParser::Mul_opContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 22;
  enterRecursionRule(_localctx, 22, fsParser::RuleMul_op, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(205);
    exponent_op(0);
    _ctx->stop = _input->LT(-1);
    setState(221);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(219);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Mul_opContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMul_op);
          setState(207);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(208);
          match(fsParser::STAR);
          setState(209);
          exponent_op(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Mul_opContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMul_op);
          setState(210);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(211);
          match(fsParser::SLASH);
          setState(212);
          exponent_op(0);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<Mul_opContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMul_op);
          setState(213);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(214);
          match(fsParser::FLOOR);
          setState(215);
          exponent_op(0);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<Mul_opContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMul_op);
          setState(216);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(217);
          match(fsParser::PERCENT);
          setState(218);
          exponent_op(0);
          break;
        }

        default:
          break;
        } 
      }
      setState(223);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Exponent_opContext ------------------------------------------------------------------

fsParser::Exponent_opContext::Exponent_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fsParser::UnaryExprContext* fsParser::Exponent_opContext::unaryExpr() {
  return getRuleContext<fsParser::UnaryExprContext>(0);
}

fsParser::Exponent_opContext* fsParser::Exponent_opContext::exponent_op() {
  return getRuleContext<fsParser::Exponent_opContext>(0);
}

tree::TerminalNode* fsParser::Exponent_opContext::POWER() {
  return getToken(fsParser::POWER, 0);
}


size_t fsParser::Exponent_opContext::getRuleIndex() const {
  return fsParser::RuleExponent_op;
}


std::any fsParser::Exponent_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitExponent_op(this);
  else
    return visitor->visitChildren(this);
}


fsParser::Exponent_opContext* fsParser::exponent_op() {
   return exponent_op(0);
}

fsParser::Exponent_opContext* fsParser::exponent_op(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  fsParser::Exponent_opContext *_localctx = _tracker.createInstance<Exponent_opContext>(_ctx, parentState);
  fsParser::Exponent_opContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 24;
  enterRecursionRule(_localctx, 24, fsParser::RuleExponent_op, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(225);
    unaryExpr();
    _ctx->stop = _input->LT(-1);
    setState(232);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Exponent_opContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExponent_op);
        setState(227);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(228);
        match(fsParser::POWER);
        setState(229);
        unaryExpr(); 
      }
      setState(234);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- UnaryExprContext ------------------------------------------------------------------

fsParser::UnaryExprContext::UnaryExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fsParser::ObjectContext* fsParser::UnaryExprContext::object() {
  return getRuleContext<fsParser::ObjectContext>(0);
}

fsParser::Func_callContext* fsParser::UnaryExprContext::func_call() {
  return getRuleContext<fsParser::Func_callContext>(0);
}

fsParser::Var_declContext* fsParser::UnaryExprContext::var_decl() {
  return getRuleContext<fsParser::Var_declContext>(0);
}

fsParser::Class_object_initContext* fsParser::UnaryExprContext::class_object_init() {
  return getRuleContext<fsParser::Class_object_initContext>(0);
}

fsParser::UnaryExprContext* fsParser::UnaryExprContext::unaryExpr() {
  return getRuleContext<fsParser::UnaryExprContext>(0);
}

fsParser::BinaryExprContext* fsParser::UnaryExprContext::binaryExpr() {
  return getRuleContext<fsParser::BinaryExprContext>(0);
}

fsParser::TernaryExprContext* fsParser::UnaryExprContext::ternaryExpr() {
  return getRuleContext<fsParser::TernaryExprContext>(0);
}

std::vector<tree::TerminalNode *> fsParser::UnaryExprContext::PLUS() {
  return getTokens(fsParser::PLUS);
}

tree::TerminalNode* fsParser::UnaryExprContext::PLUS(size_t i) {
  return getToken(fsParser::PLUS, i);
}

std::vector<tree::TerminalNode *> fsParser::UnaryExprContext::MINUS() {
  return getTokens(fsParser::MINUS);
}

tree::TerminalNode* fsParser::UnaryExprContext::MINUS(size_t i) {
  return getToken(fsParser::MINUS, i);
}

tree::TerminalNode* fsParser::UnaryExprContext::STAR() {
  return getToken(fsParser::STAR, 0);
}

tree::TerminalNode* fsParser::UnaryExprContext::LOPAREN() {
  return getToken(fsParser::LOPAREN, 0);
}

tree::TerminalNode* fsParser::UnaryExprContext::ROPAREN() {
  return getToken(fsParser::ROPAREN, 0);
}


size_t fsParser::UnaryExprContext::getRuleIndex() const {
  return fsParser::RuleUnaryExpr;
}


std::any fsParser::UnaryExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitUnaryExpr(this);
  else
    return visitor->visitChildren(this);
}

fsParser::UnaryExprContext* fsParser::unaryExpr() {
  UnaryExprContext *_localctx = _tracker.createInstance<UnaryExprContext>(_ctx, getState());
  enterRule(_localctx, 26, fsParser::RuleUnaryExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(255);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(235);
      object();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(236);
      func_call();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(237);
      var_decl();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(238);
      class_object_init();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(240); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(239);
                _la = _input->LA(1);
                if (!(_la == fsParser::PLUS

                || _la == fsParser::MINUS)) {
                _errHandler->recoverInline(this);
                }
                else {
                  _errHandler->reportMatch(this);
                  consume();
                }
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(242); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      setState(247);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
      case 1: {
        setState(244);
        unaryExpr();
        break;
      }

      case 2: {
        setState(245);
        binaryExpr();
        break;
      }

      case 3: {
        setState(246);
        ternaryExpr();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(249);
      match(fsParser::STAR);
      setState(250);
      ternaryExpr();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(251);
      match(fsParser::LOPAREN);
      setState(252);
      ternaryExpr();
      setState(253);
      match(fsParser::ROPAREN);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_callContext ------------------------------------------------------------------

fsParser::Func_callContext::Func_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fsParser::ObjectContext* fsParser::Func_callContext::object() {
  return getRuleContext<fsParser::ObjectContext>(0);
}

tree::TerminalNode* fsParser::Func_callContext::LOPAREN() {
  return getToken(fsParser::LOPAREN, 0);
}

tree::TerminalNode* fsParser::Func_callContext::ROPAREN() {
  return getToken(fsParser::ROPAREN, 0);
}

fsParser::ParamsContext* fsParser::Func_callContext::params() {
  return getRuleContext<fsParser::ParamsContext>(0);
}


size_t fsParser::Func_callContext::getRuleIndex() const {
  return fsParser::RuleFunc_call;
}


std::any fsParser::Func_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitFunc_call(this);
  else
    return visitor->visitChildren(this);
}

fsParser::Func_callContext* fsParser::func_call() {
  Func_callContext *_localctx = _tracker.createInstance<Func_callContext>(_ctx, getState());
  enterRule(_localctx, 28, fsParser::RuleFunc_call);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(267);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(257);
      object();
      setState(258);
      match(fsParser::LOPAREN);
      setState(260);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 1973297222787102) != 0)) {
        setState(259);
        params();
      }
      setState(262);
      match(fsParser::ROPAREN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(264);
      object();
      setState(265);
      params();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamsContext ------------------------------------------------------------------

fsParser::ParamsContext::ParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<fsParser::ParamContext *> fsParser::ParamsContext::param() {
  return getRuleContexts<fsParser::ParamContext>();
}

fsParser::ParamContext* fsParser::ParamsContext::param(size_t i) {
  return getRuleContext<fsParser::ParamContext>(i);
}

std::vector<tree::TerminalNode *> fsParser::ParamsContext::COMMA() {
  return getTokens(fsParser::COMMA);
}

tree::TerminalNode* fsParser::ParamsContext::COMMA(size_t i) {
  return getToken(fsParser::COMMA, i);
}


size_t fsParser::ParamsContext::getRuleIndex() const {
  return fsParser::RuleParams;
}


std::any fsParser::ParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitParams(this);
  else
    return visitor->visitChildren(this);
}

fsParser::ParamsContext* fsParser::params() {
  ParamsContext *_localctx = _tracker.createInstance<ParamsContext>(_ctx, getState());
  enterRule(_localctx, 30, fsParser::RuleParams);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(269);
    param();
    setState(274);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(270);
        match(fsParser::COMMA);
        setState(271);
        param(); 
      }
      setState(276);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamContext ------------------------------------------------------------------

fsParser::ParamContext::ParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fsParser::TernaryExprContext* fsParser::ParamContext::ternaryExpr() {
  return getRuleContext<fsParser::TernaryExprContext>(0);
}


size_t fsParser::ParamContext::getRuleIndex() const {
  return fsParser::RuleParam;
}


std::any fsParser::ParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitParam(this);
  else
    return visitor->visitChildren(this);
}

fsParser::ParamContext* fsParser::param() {
  ParamContext *_localctx = _tracker.createInstance<ParamContext>(_ctx, getState());
  enterRule(_localctx, 32, fsParser::RuleParam);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(277);
    ternaryExpr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_declContext ------------------------------------------------------------------

fsParser::Var_declContext::Var_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fsParser::Var_declContext::DECL() {
  return getToken(fsParser::DECL, 0);
}

tree::TerminalNode* fsParser::Var_declContext::IDEN() {
  return getToken(fsParser::IDEN, 0);
}


size_t fsParser::Var_declContext::getRuleIndex() const {
  return fsParser::RuleVar_decl;
}


std::any fsParser::Var_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitVar_decl(this);
  else
    return visitor->visitChildren(this);
}

fsParser::Var_declContext* fsParser::var_decl() {
  Var_declContext *_localctx = _tracker.createInstance<Var_declContext>(_ctx, getState());
  enterRule(_localctx, 34, fsParser::RuleVar_decl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(279);
    match(fsParser::DECL);
    setState(280);
    match(fsParser::IDEN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Container_itemsContext ------------------------------------------------------------------

fsParser::Container_itemsContext::Container_itemsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fsParser::TernaryExprContext* fsParser::Container_itemsContext::ternaryExpr() {
  return getRuleContext<fsParser::TernaryExprContext>(0);
}

std::vector<tree::TerminalNode *> fsParser::Container_itemsContext::COMMA() {
  return getTokens(fsParser::COMMA);
}

tree::TerminalNode* fsParser::Container_itemsContext::COMMA(size_t i) {
  return getToken(fsParser::COMMA, i);
}

std::vector<fsParser::Container_itemsContext *> fsParser::Container_itemsContext::container_items() {
  return getRuleContexts<fsParser::Container_itemsContext>();
}

fsParser::Container_itemsContext* fsParser::Container_itemsContext::container_items(size_t i) {
  return getRuleContext<fsParser::Container_itemsContext>(i);
}


size_t fsParser::Container_itemsContext::getRuleIndex() const {
  return fsParser::RuleContainer_items;
}


std::any fsParser::Container_itemsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitContainer_items(this);
  else
    return visitor->visitChildren(this);
}

fsParser::Container_itemsContext* fsParser::container_items() {
  Container_itemsContext *_localctx = _tracker.createInstance<Container_itemsContext>(_ctx, getState());
  enterRule(_localctx, 36, fsParser::RuleContainer_items);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(282);
    ternaryExpr();
    setState(287);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(283);
        match(fsParser::COMMA);
        setState(284);
        container_items(); 
      }
      setState(289);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ContainerContext ------------------------------------------------------------------

fsParser::ContainerContext::ContainerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fsParser::ContainerContext::LCPAREN() {
  return getToken(fsParser::LCPAREN, 0);
}

tree::TerminalNode* fsParser::ContainerContext::RCPAREN() {
  return getToken(fsParser::RCPAREN, 0);
}

fsParser::Container_itemsContext* fsParser::ContainerContext::container_items() {
  return getRuleContext<fsParser::Container_itemsContext>(0);
}


size_t fsParser::ContainerContext::getRuleIndex() const {
  return fsParser::RuleContainer;
}


std::any fsParser::ContainerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitContainer(this);
  else
    return visitor->visitChildren(this);
}

fsParser::ContainerContext* fsParser::container() {
  ContainerContext *_localctx = _tracker.createInstance<ContainerContext>(_ctx, getState());
  enterRule(_localctx, 38, fsParser::RuleContainer);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(290);
    match(fsParser::LCPAREN);
    setState(292);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1973297222787102) != 0)) {
      setState(291);
      container_items();
    }
    setState(294);
    match(fsParser::RCPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Map_pairsContext ------------------------------------------------------------------

fsParser::Map_pairsContext::Map_pairsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fsParser::Map_pairsContext::STRING() {
  return getToken(fsParser::STRING, 0);
}

tree::TerminalNode* fsParser::Map_pairsContext::COLON() {
  return getToken(fsParser::COLON, 0);
}

fsParser::TernaryExprContext* fsParser::Map_pairsContext::ternaryExpr() {
  return getRuleContext<fsParser::TernaryExprContext>(0);
}

std::vector<tree::TerminalNode *> fsParser::Map_pairsContext::COMMA() {
  return getTokens(fsParser::COMMA);
}

tree::TerminalNode* fsParser::Map_pairsContext::COMMA(size_t i) {
  return getToken(fsParser::COMMA, i);
}

std::vector<fsParser::Map_pairsContext *> fsParser::Map_pairsContext::map_pairs() {
  return getRuleContexts<fsParser::Map_pairsContext>();
}

fsParser::Map_pairsContext* fsParser::Map_pairsContext::map_pairs(size_t i) {
  return getRuleContext<fsParser::Map_pairsContext>(i);
}


size_t fsParser::Map_pairsContext::getRuleIndex() const {
  return fsParser::RuleMap_pairs;
}


std::any fsParser::Map_pairsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitMap_pairs(this);
  else
    return visitor->visitChildren(this);
}

fsParser::Map_pairsContext* fsParser::map_pairs() {
  Map_pairsContext *_localctx = _tracker.createInstance<Map_pairsContext>(_ctx, getState());
  enterRule(_localctx, 40, fsParser::RuleMap_pairs);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(296);
    match(fsParser::STRING);
    setState(297);
    match(fsParser::COLON);
    setState(298);
    ternaryExpr();
    setState(303);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(299);
        match(fsParser::COMMA);
        setState(300);
        map_pairs(); 
      }
      setState(305);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MapContext ------------------------------------------------------------------

fsParser::MapContext::MapContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fsParser::MapContext::LPAREN() {
  return getToken(fsParser::LPAREN, 0);
}

tree::TerminalNode* fsParser::MapContext::RPAREN() {
  return getToken(fsParser::RPAREN, 0);
}

fsParser::Map_pairsContext* fsParser::MapContext::map_pairs() {
  return getRuleContext<fsParser::Map_pairsContext>(0);
}


size_t fsParser::MapContext::getRuleIndex() const {
  return fsParser::RuleMap;
}


std::any fsParser::MapContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitMap(this);
  else
    return visitor->visitChildren(this);
}

fsParser::MapContext* fsParser::map() {
  MapContext *_localctx = _tracker.createInstance<MapContext>(_ctx, getState());
  enterRule(_localctx, 42, fsParser::RuleMap);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(306);
    match(fsParser::LPAREN);
    setState(308);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == fsParser::STRING) {
      setState(307);
      map_pairs();
    }
    setState(310);
    match(fsParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

fsParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fsParser::StmtContext::BREAK() {
  return getToken(fsParser::BREAK, 0);
}

tree::TerminalNode* fsParser::StmtContext::CONTINUE() {
  return getToken(fsParser::CONTINUE, 0);
}

tree::TerminalNode* fsParser::StmtContext::IGNORE() {
  return getToken(fsParser::IGNORE, 0);
}

fsParser::Func_defContext* fsParser::StmtContext::func_def() {
  return getRuleContext<fsParser::Func_defContext>(0);
}

fsParser::Class_create_stmtContext* fsParser::StmtContext::class_create_stmt() {
  return getRuleContext<fsParser::Class_create_stmtContext>(0);
}

fsParser::Cond_stmtContext* fsParser::StmtContext::cond_stmt() {
  return getRuleContext<fsParser::Cond_stmtContext>(0);
}

fsParser::Loop_stmtContext* fsParser::StmtContext::loop_stmt() {
  return getRuleContext<fsParser::Loop_stmtContext>(0);
}

fsParser::Import_stmtContext* fsParser::StmtContext::import_stmt() {
  return getRuleContext<fsParser::Import_stmtContext>(0);
}

fsParser::Mut_stmtContext* fsParser::StmtContext::mut_stmt() {
  return getRuleContext<fsParser::Mut_stmtContext>(0);
}

fsParser::Const_stmtContext* fsParser::StmtContext::const_stmt() {
  return getRuleContext<fsParser::Const_stmtContext>(0);
}

fsParser::Delete_stmtContext* fsParser::StmtContext::delete_stmt() {
  return getRuleContext<fsParser::Delete_stmtContext>(0);
}

fsParser::Return_stmtContext* fsParser::StmtContext::return_stmt() {
  return getRuleContext<fsParser::Return_stmtContext>(0);
}

fsParser::Define_stmtContext* fsParser::StmtContext::define_stmt() {
  return getRuleContext<fsParser::Define_stmtContext>(0);
}


size_t fsParser::StmtContext::getRuleIndex() const {
  return fsParser::RuleStmt;
}


std::any fsParser::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}

fsParser::StmtContext* fsParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 44, fsParser::RuleStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(325);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case fsParser::BREAK: {
        enterOuterAlt(_localctx, 1);
        setState(312);
        match(fsParser::BREAK);
        break;
      }

      case fsParser::CONTINUE: {
        enterOuterAlt(_localctx, 2);
        setState(313);
        match(fsParser::CONTINUE);
        break;
      }

      case fsParser::IGNORE: {
        enterOuterAlt(_localctx, 3);
        setState(314);
        match(fsParser::IGNORE);
        break;
      }

      case fsParser::FUNC: {
        enterOuterAlt(_localctx, 4);
        setState(315);
        func_def();
        break;
      }

      case fsParser::CLASS: {
        enterOuterAlt(_localctx, 5);
        setState(316);
        class_create_stmt();
        break;
      }

      case fsParser::IF: {
        enterOuterAlt(_localctx, 6);
        setState(317);
        cond_stmt();
        break;
      }

      case fsParser::LOOP: {
        enterOuterAlt(_localctx, 7);
        setState(318);
        loop_stmt();
        break;
      }

      case fsParser::INCLUDE: {
        enterOuterAlt(_localctx, 8);
        setState(319);
        import_stmt();
        break;
      }

      case fsParser::MUT: {
        enterOuterAlt(_localctx, 9);
        setState(320);
        mut_stmt();
        break;
      }

      case fsParser::CONST: {
        enterOuterAlt(_localctx, 10);
        setState(321);
        const_stmt();
        break;
      }

      case fsParser::DELETE: {
        enterOuterAlt(_localctx, 11);
        setState(322);
        delete_stmt();
        break;
      }

      case fsParser::RETURN: {
        enterOuterAlt(_localctx, 12);
        setState(323);
        return_stmt();
        break;
      }

      case fsParser::DEFINE: {
        enterOuterAlt(_localctx, 13);
        setState(324);
        define_stmt();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Def_paramsContext ------------------------------------------------------------------

fsParser::Def_paramsContext::Def_paramsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fsParser::Def_paramsContext::IDEN() {
  return getToken(fsParser::IDEN, 0);
}

std::vector<tree::TerminalNode *> fsParser::Def_paramsContext::COMMA() {
  return getTokens(fsParser::COMMA);
}

tree::TerminalNode* fsParser::Def_paramsContext::COMMA(size_t i) {
  return getToken(fsParser::COMMA, i);
}

std::vector<fsParser::Def_paramsContext *> fsParser::Def_paramsContext::def_params() {
  return getRuleContexts<fsParser::Def_paramsContext>();
}

fsParser::Def_paramsContext* fsParser::Def_paramsContext::def_params(size_t i) {
  return getRuleContext<fsParser::Def_paramsContext>(i);
}


size_t fsParser::Def_paramsContext::getRuleIndex() const {
  return fsParser::RuleDef_params;
}


std::any fsParser::Def_paramsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitDef_params(this);
  else
    return visitor->visitChildren(this);
}

fsParser::Def_paramsContext* fsParser::def_params() {
  Def_paramsContext *_localctx = _tracker.createInstance<Def_paramsContext>(_ctx, getState());
  enterRule(_localctx, 46, fsParser::RuleDef_params);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(327);
    match(fsParser::IDEN);
    setState(332);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(328);
        match(fsParser::COMMA);
        setState(329);
        def_params(); 
      }
      setState(334);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_create_stmtContext ------------------------------------------------------------------

fsParser::Class_create_stmtContext::Class_create_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fsParser::Class_create_stmtContext::CLASS() {
  return getToken(fsParser::CLASS, 0);
}

std::vector<tree::TerminalNode *> fsParser::Class_create_stmtContext::IDEN() {
  return getTokens(fsParser::IDEN);
}

tree::TerminalNode* fsParser::Class_create_stmtContext::IDEN(size_t i) {
  return getToken(fsParser::IDEN, i);
}

tree::TerminalNode* fsParser::Class_create_stmtContext::END() {
  return getToken(fsParser::END, 0);
}

tree::TerminalNode* fsParser::Class_create_stmtContext::INHERITS() {
  return getToken(fsParser::INHERITS, 0);
}

fsParser::Class_bodyContext* fsParser::Class_create_stmtContext::class_body() {
  return getRuleContext<fsParser::Class_bodyContext>(0);
}


size_t fsParser::Class_create_stmtContext::getRuleIndex() const {
  return fsParser::RuleClass_create_stmt;
}


std::any fsParser::Class_create_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitClass_create_stmt(this);
  else
    return visitor->visitChildren(this);
}

fsParser::Class_create_stmtContext* fsParser::class_create_stmt() {
  Class_create_stmtContext *_localctx = _tracker.createInstance<Class_create_stmtContext>(_ctx, getState());
  enterRule(_localctx, 48, fsParser::RuleClass_create_stmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(335);
    match(fsParser::CLASS);
    setState(336);
    match(fsParser::IDEN);
    setState(339);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == fsParser::INHERITS) {
      setState(337);
      match(fsParser::INHERITS);
      setState(338);
      match(fsParser::IDEN);
    }
    setState(342);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 6442987552) != 0)) {
      setState(341);
      class_body();
    }
    setState(344);
    match(fsParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Constructor_bodyContext ------------------------------------------------------------------

fsParser::Constructor_bodyContext::Constructor_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fsParser::TernaryExprContext* fsParser::Constructor_bodyContext::ternaryExpr() {
  return getRuleContext<fsParser::TernaryExprContext>(0);
}

fsParser::StmtContext* fsParser::Constructor_bodyContext::stmt() {
  return getRuleContext<fsParser::StmtContext>(0);
}

std::vector<tree::TerminalNode *> fsParser::Constructor_bodyContext::EOT() {
  return getTokens(fsParser::EOT);
}

tree::TerminalNode* fsParser::Constructor_bodyContext::EOT(size_t i) {
  return getToken(fsParser::EOT, i);
}

fsParser::Constructor_bodyContext* fsParser::Constructor_bodyContext::constructor_body() {
  return getRuleContext<fsParser::Constructor_bodyContext>(0);
}


size_t fsParser::Constructor_bodyContext::getRuleIndex() const {
  return fsParser::RuleConstructor_body;
}


std::any fsParser::Constructor_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitConstructor_body(this);
  else
    return visitor->visitChildren(this);
}

fsParser::Constructor_bodyContext* fsParser::constructor_body() {
  Constructor_bodyContext *_localctx = _tracker.createInstance<Constructor_bodyContext>(_ctx, getState());
  enterRule(_localctx, 50, fsParser::RuleConstructor_body);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(348);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case fsParser::STRING:
      case fsParser::NUMBER:
      case fsParser::BOOL:
      case fsParser::NIL:
      case fsParser::DECL:
      case fsParser::NEW:
      case fsParser::THIS:
      case fsParser::IDEN:
      case fsParser::LOPAREN:
      case fsParser::LCPAREN:
      case fsParser::LPAREN:
      case fsParser::PLUS:
      case fsParser::MINUS:
      case fsParser::STAR: {
        setState(346);
        ternaryExpr();
        break;
      }

      case fsParser::BREAK:
      case fsParser::CLASS:
      case fsParser::CONST:
      case fsParser::CONTINUE:
      case fsParser::DEFINE:
      case fsParser::DELETE:
      case fsParser::FUNC:
      case fsParser::IF:
      case fsParser::IGNORE:
      case fsParser::INCLUDE:
      case fsParser::LOOP:
      case fsParser::MUT:
      case fsParser::RETURN: {
        setState(347);
        stmt();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(351); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(350);
      match(fsParser::EOT);
      setState(353); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == fsParser::EOT);
    setState(356);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1973331791769374) != 0)) {
      setState(355);
      constructor_body();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_constructor_initContext ------------------------------------------------------------------

fsParser::Class_constructor_initContext::Class_constructor_initContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fsParser::Class_constructor_initContext::CONSTRUCTOR() {
  return getToken(fsParser::CONSTRUCTOR, 0);
}

tree::TerminalNode* fsParser::Class_constructor_initContext::LOPAREN() {
  return getToken(fsParser::LOPAREN, 0);
}

tree::TerminalNode* fsParser::Class_constructor_initContext::ROPAREN() {
  return getToken(fsParser::ROPAREN, 0);
}

tree::TerminalNode* fsParser::Class_constructor_initContext::END() {
  return getToken(fsParser::END, 0);
}

fsParser::Def_paramsContext* fsParser::Class_constructor_initContext::def_params() {
  return getRuleContext<fsParser::Def_paramsContext>(0);
}

fsParser::Constructor_bodyContext* fsParser::Class_constructor_initContext::constructor_body() {
  return getRuleContext<fsParser::Constructor_bodyContext>(0);
}


size_t fsParser::Class_constructor_initContext::getRuleIndex() const {
  return fsParser::RuleClass_constructor_init;
}


std::any fsParser::Class_constructor_initContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitClass_constructor_init(this);
  else
    return visitor->visitChildren(this);
}

fsParser::Class_constructor_initContext* fsParser::class_constructor_init() {
  Class_constructor_initContext *_localctx = _tracker.createInstance<Class_constructor_initContext>(_ctx, getState());
  enterRule(_localctx, 52, fsParser::RuleClass_constructor_init);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(358);
    match(fsParser::CONSTRUCTOR);
    setState(359);
    match(fsParser::LOPAREN);
    setState(361);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == fsParser::IDEN) {
      setState(360);
      def_params();
    }
    setState(363);
    match(fsParser::ROPAREN);
    setState(365);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1973331791769374) != 0)) {
      setState(364);
      constructor_body();
    }
    setState(367);
    match(fsParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_object_initContext ------------------------------------------------------------------

fsParser::Class_object_initContext::Class_object_initContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fsParser::Class_object_initContext::NEW() {
  return getToken(fsParser::NEW, 0);
}

fsParser::ObjectContext* fsParser::Class_object_initContext::object() {
  return getRuleContext<fsParser::ObjectContext>(0);
}

tree::TerminalNode* fsParser::Class_object_initContext::LOPAREN() {
  return getToken(fsParser::LOPAREN, 0);
}

tree::TerminalNode* fsParser::Class_object_initContext::ROPAREN() {
  return getToken(fsParser::ROPAREN, 0);
}

fsParser::ParamsContext* fsParser::Class_object_initContext::params() {
  return getRuleContext<fsParser::ParamsContext>(0);
}


size_t fsParser::Class_object_initContext::getRuleIndex() const {
  return fsParser::RuleClass_object_init;
}


std::any fsParser::Class_object_initContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitClass_object_init(this);
  else
    return visitor->visitChildren(this);
}

fsParser::Class_object_initContext* fsParser::class_object_init() {
  Class_object_initContext *_localctx = _tracker.createInstance<Class_object_initContext>(_ctx, getState());
  enterRule(_localctx, 54, fsParser::RuleClass_object_init);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(369);
    match(fsParser::NEW);
    setState(370);
    object();
    setState(371);
    match(fsParser::LOPAREN);
    setState(373);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1973297222787102) != 0)) {
      setState(372);
      params();
    }
    setState(375);
    match(fsParser::ROPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_thisExprContext ------------------------------------------------------------------

fsParser::Class_thisExprContext::Class_thisExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fsParser::Class_thisExprContext::THIS() {
  return getToken(fsParser::THIS, 0);
}

tree::TerminalNode* fsParser::Class_thisExprContext::DOT() {
  return getToken(fsParser::DOT, 0);
}

fsParser::TernaryExprContext* fsParser::Class_thisExprContext::ternaryExpr() {
  return getRuleContext<fsParser::TernaryExprContext>(0);
}


size_t fsParser::Class_thisExprContext::getRuleIndex() const {
  return fsParser::RuleClass_thisExpr;
}


std::any fsParser::Class_thisExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitClass_thisExpr(this);
  else
    return visitor->visitChildren(this);
}

fsParser::Class_thisExprContext* fsParser::class_thisExpr() {
  Class_thisExprContext *_localctx = _tracker.createInstance<Class_thisExprContext>(_ctx, getState());
  enterRule(_localctx, 56, fsParser::RuleClass_thisExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(377);
    match(fsParser::THIS);
    setState(378);
    match(fsParser::DOT);
    setState(379);
    ternaryExpr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_override_stmtContext ------------------------------------------------------------------

fsParser::Class_override_stmtContext::Class_override_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fsParser::Class_override_stmtContext::OVERRIDE() {
  return getToken(fsParser::OVERRIDE, 0);
}

fsParser::Func_defContext* fsParser::Class_override_stmtContext::func_def() {
  return getRuleContext<fsParser::Func_defContext>(0);
}


size_t fsParser::Class_override_stmtContext::getRuleIndex() const {
  return fsParser::RuleClass_override_stmt;
}


std::any fsParser::Class_override_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitClass_override_stmt(this);
  else
    return visitor->visitChildren(this);
}

fsParser::Class_override_stmtContext* fsParser::class_override_stmt() {
  Class_override_stmtContext *_localctx = _tracker.createInstance<Class_override_stmtContext>(_ctx, getState());
  enterRule(_localctx, 58, fsParser::RuleClass_override_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(381);
    match(fsParser::OVERRIDE);
    setState(382);
    func_def();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_overload_stmtContext ------------------------------------------------------------------

fsParser::Class_overload_stmtContext::Class_overload_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fsParser::Class_overload_stmtContext::OVERLOAD() {
  return getToken(fsParser::OVERLOAD, 0);
}

tree::TerminalNode* fsParser::Class_overload_stmtContext::LOPAREN() {
  return getToken(fsParser::LOPAREN, 0);
}

fsParser::Func_defContext* fsParser::Class_overload_stmtContext::func_def() {
  return getRuleContext<fsParser::Func_defContext>(0);
}

tree::TerminalNode* fsParser::Class_overload_stmtContext::ROPAREN() {
  return getToken(fsParser::ROPAREN, 0);
}


size_t fsParser::Class_overload_stmtContext::getRuleIndex() const {
  return fsParser::RuleClass_overload_stmt;
}


std::any fsParser::Class_overload_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitClass_overload_stmt(this);
  else
    return visitor->visitChildren(this);
}

fsParser::Class_overload_stmtContext* fsParser::class_overload_stmt() {
  Class_overload_stmtContext *_localctx = _tracker.createInstance<Class_overload_stmtContext>(_ctx, getState());
  enterRule(_localctx, 60, fsParser::RuleClass_overload_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(384);
    match(fsParser::OVERLOAD);
    setState(385);
    match(fsParser::LOPAREN);
    setState(386);
    func_def();
    setState(387);
    match(fsParser::ROPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_abstract_stmtContext ------------------------------------------------------------------

fsParser::Class_abstract_stmtContext::Class_abstract_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fsParser::Class_abstract_stmtContext::ABSTRACT() {
  return getToken(fsParser::ABSTRACT, 0);
}

fsParser::Func_defContext* fsParser::Class_abstract_stmtContext::func_def() {
  return getRuleContext<fsParser::Func_defContext>(0);
}

fsParser::Var_declContext* fsParser::Class_abstract_stmtContext::var_decl() {
  return getRuleContext<fsParser::Var_declContext>(0);
}


size_t fsParser::Class_abstract_stmtContext::getRuleIndex() const {
  return fsParser::RuleClass_abstract_stmt;
}


std::any fsParser::Class_abstract_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitClass_abstract_stmt(this);
  else
    return visitor->visitChildren(this);
}

fsParser::Class_abstract_stmtContext* fsParser::class_abstract_stmt() {
  Class_abstract_stmtContext *_localctx = _tracker.createInstance<Class_abstract_stmtContext>(_ctx, getState());
  enterRule(_localctx, 62, fsParser::RuleClass_abstract_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(389);
    match(fsParser::ABSTRACT);
    setState(392);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case fsParser::FUNC: {
        setState(390);
        func_def();
        break;
      }

      case fsParser::DECL: {
        setState(391);
        var_decl();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_bodyContext ------------------------------------------------------------------

fsParser::Class_bodyContext::Class_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fsParser::Class_constructor_initContext* fsParser::Class_bodyContext::class_constructor_init() {
  return getRuleContext<fsParser::Class_constructor_initContext>(0);
}

fsParser::Func_defContext* fsParser::Class_bodyContext::func_def() {
  return getRuleContext<fsParser::Func_defContext>(0);
}

fsParser::Var_declContext* fsParser::Class_bodyContext::var_decl() {
  return getRuleContext<fsParser::Var_declContext>(0);
}

fsParser::Class_override_stmtContext* fsParser::Class_bodyContext::class_override_stmt() {
  return getRuleContext<fsParser::Class_override_stmtContext>(0);
}

fsParser::Class_overload_stmtContext* fsParser::Class_bodyContext::class_overload_stmt() {
  return getRuleContext<fsParser::Class_overload_stmtContext>(0);
}

fsParser::Class_abstract_stmtContext* fsParser::Class_bodyContext::class_abstract_stmt() {
  return getRuleContext<fsParser::Class_abstract_stmtContext>(0);
}

std::vector<fsParser::Class_bodyContext *> fsParser::Class_bodyContext::class_body() {
  return getRuleContexts<fsParser::Class_bodyContext>();
}

fsParser::Class_bodyContext* fsParser::Class_bodyContext::class_body(size_t i) {
  return getRuleContext<fsParser::Class_bodyContext>(i);
}

std::vector<tree::TerminalNode *> fsParser::Class_bodyContext::EOT() {
  return getTokens(fsParser::EOT);
}

tree::TerminalNode* fsParser::Class_bodyContext::EOT(size_t i) {
  return getToken(fsParser::EOT, i);
}


size_t fsParser::Class_bodyContext::getRuleIndex() const {
  return fsParser::RuleClass_body;
}


std::any fsParser::Class_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitClass_body(this);
  else
    return visitor->visitChildren(this);
}

fsParser::Class_bodyContext* fsParser::class_body() {
  Class_bodyContext *_localctx = _tracker.createInstance<Class_bodyContext>(_ctx, getState());
  enterRule(_localctx, 64, fsParser::RuleClass_body);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(400);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case fsParser::CONSTRUCTOR: {
        setState(394);
        class_constructor_init();
        break;
      }

      case fsParser::FUNC: {
        setState(395);
        func_def();
        break;
      }

      case fsParser::DECL: {
        setState(396);
        var_decl();
        break;
      }

      case fsParser::OVERRIDE: {
        setState(397);
        class_override_stmt();
        break;
      }

      case fsParser::OVERLOAD: {
        setState(398);
        class_overload_stmt();
        break;
      }

      case fsParser::ABSTRACT: {
        setState(399);
        class_abstract_stmt();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(410);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(403); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(402);
          match(fsParser::EOT);
          setState(405); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == fsParser::EOT);
        setState(407);
        class_body(); 
      }
      setState(412);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Delete_stmtContext ------------------------------------------------------------------

fsParser::Delete_stmtContext::Delete_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fsParser::Delete_stmtContext::DELETE() {
  return getToken(fsParser::DELETE, 0);
}

tree::TerminalNode* fsParser::Delete_stmtContext::IDEN() {
  return getToken(fsParser::IDEN, 0);
}


size_t fsParser::Delete_stmtContext::getRuleIndex() const {
  return fsParser::RuleDelete_stmt;
}


std::any fsParser::Delete_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitDelete_stmt(this);
  else
    return visitor->visitChildren(this);
}

fsParser::Delete_stmtContext* fsParser::delete_stmt() {
  Delete_stmtContext *_localctx = _tracker.createInstance<Delete_stmtContext>(_ctx, getState());
  enterRule(_localctx, 66, fsParser::RuleDelete_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(413);
    match(fsParser::DELETE);
    setState(414);
    match(fsParser::IDEN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Return_stmtContext ------------------------------------------------------------------

fsParser::Return_stmtContext::Return_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fsParser::Return_stmtContext::RETURN() {
  return getToken(fsParser::RETURN, 0);
}

fsParser::ExprContext* fsParser::Return_stmtContext::expr() {
  return getRuleContext<fsParser::ExprContext>(0);
}


size_t fsParser::Return_stmtContext::getRuleIndex() const {
  return fsParser::RuleReturn_stmt;
}


std::any fsParser::Return_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitReturn_stmt(this);
  else
    return visitor->visitChildren(this);
}

fsParser::Return_stmtContext* fsParser::return_stmt() {
  Return_stmtContext *_localctx = _tracker.createInstance<Return_stmtContext>(_ctx, getState());
  enterRule(_localctx, 68, fsParser::RuleReturn_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(416);
    match(fsParser::RETURN);
    setState(417);
    expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Mut_stmtContext ------------------------------------------------------------------

fsParser::Mut_stmtContext::Mut_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fsParser::Mut_stmtContext::MUT() {
  return getToken(fsParser::MUT, 0);
}

fsParser::StmtContext* fsParser::Mut_stmtContext::stmt() {
  return getRuleContext<fsParser::StmtContext>(0);
}


size_t fsParser::Mut_stmtContext::getRuleIndex() const {
  return fsParser::RuleMut_stmt;
}


std::any fsParser::Mut_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitMut_stmt(this);
  else
    return visitor->visitChildren(this);
}

fsParser::Mut_stmtContext* fsParser::mut_stmt() {
  Mut_stmtContext *_localctx = _tracker.createInstance<Mut_stmtContext>(_ctx, getState());
  enterRule(_localctx, 70, fsParser::RuleMut_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(419);
    match(fsParser::MUT);
    setState(420);
    stmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Const_stmtContext ------------------------------------------------------------------

fsParser::Const_stmtContext::Const_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fsParser::Const_stmtContext::CONST() {
  return getToken(fsParser::CONST, 0);
}

fsParser::StmtContext* fsParser::Const_stmtContext::stmt() {
  return getRuleContext<fsParser::StmtContext>(0);
}


size_t fsParser::Const_stmtContext::getRuleIndex() const {
  return fsParser::RuleConst_stmt;
}


std::any fsParser::Const_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitConst_stmt(this);
  else
    return visitor->visitChildren(this);
}

fsParser::Const_stmtContext* fsParser::const_stmt() {
  Const_stmtContext *_localctx = _tracker.createInstance<Const_stmtContext>(_ctx, getState());
  enterRule(_localctx, 72, fsParser::RuleConst_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(422);
    match(fsParser::CONST);
    setState(423);
    stmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_bodyContext ------------------------------------------------------------------

fsParser::Func_bodyContext::Func_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<fsParser::TernaryExprContext *> fsParser::Func_bodyContext::ternaryExpr() {
  return getRuleContexts<fsParser::TernaryExprContext>();
}

fsParser::TernaryExprContext* fsParser::Func_bodyContext::ternaryExpr(size_t i) {
  return getRuleContext<fsParser::TernaryExprContext>(i);
}

std::vector<fsParser::StmtContext *> fsParser::Func_bodyContext::stmt() {
  return getRuleContexts<fsParser::StmtContext>();
}

fsParser::StmtContext* fsParser::Func_bodyContext::stmt(size_t i) {
  return getRuleContext<fsParser::StmtContext>(i);
}

std::vector<tree::TerminalNode *> fsParser::Func_bodyContext::EOT() {
  return getTokens(fsParser::EOT);
}

tree::TerminalNode* fsParser::Func_bodyContext::EOT(size_t i) {
  return getToken(fsParser::EOT, i);
}


size_t fsParser::Func_bodyContext::getRuleIndex() const {
  return fsParser::RuleFunc_body;
}


std::any fsParser::Func_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitFunc_body(this);
  else
    return visitor->visitChildren(this);
}

fsParser::Func_bodyContext* fsParser::func_body() {
  Func_bodyContext *_localctx = _tracker.createInstance<Func_bodyContext>(_ctx, getState());
  enterRule(_localctx, 74, fsParser::RuleFunc_body);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(434); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(427);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case fsParser::STRING:
        case fsParser::NUMBER:
        case fsParser::BOOL:
        case fsParser::NIL:
        case fsParser::DECL:
        case fsParser::NEW:
        case fsParser::THIS:
        case fsParser::IDEN:
        case fsParser::LOPAREN:
        case fsParser::LCPAREN:
        case fsParser::LPAREN:
        case fsParser::PLUS:
        case fsParser::MINUS:
        case fsParser::STAR: {
          setState(425);
          ternaryExpr();
          break;
        }

        case fsParser::BREAK:
        case fsParser::CLASS:
        case fsParser::CONST:
        case fsParser::CONTINUE:
        case fsParser::DEFINE:
        case fsParser::DELETE:
        case fsParser::FUNC:
        case fsParser::IF:
        case fsParser::IGNORE:
        case fsParser::INCLUDE:
        case fsParser::LOOP:
        case fsParser::MUT:
        case fsParser::RETURN: {
          setState(426);
          stmt();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(430); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(429);
        match(fsParser::EOT);
        setState(432); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == fsParser::EOT);
      setState(436); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1973331791769374) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_defContext ------------------------------------------------------------------

fsParser::Func_defContext::Func_defContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fsParser::Func_defContext::FUNC() {
  return getToken(fsParser::FUNC, 0);
}

tree::TerminalNode* fsParser::Func_defContext::IDEN() {
  return getToken(fsParser::IDEN, 0);
}

tree::TerminalNode* fsParser::Func_defContext::LOPAREN() {
  return getToken(fsParser::LOPAREN, 0);
}

tree::TerminalNode* fsParser::Func_defContext::ROPAREN() {
  return getToken(fsParser::ROPAREN, 0);
}

tree::TerminalNode* fsParser::Func_defContext::END() {
  return getToken(fsParser::END, 0);
}

fsParser::Def_paramsContext* fsParser::Func_defContext::def_params() {
  return getRuleContext<fsParser::Def_paramsContext>(0);
}

std::vector<tree::TerminalNode *> fsParser::Func_defContext::EOT() {
  return getTokens(fsParser::EOT);
}

tree::TerminalNode* fsParser::Func_defContext::EOT(size_t i) {
  return getToken(fsParser::EOT, i);
}

fsParser::Func_bodyContext* fsParser::Func_defContext::func_body() {
  return getRuleContext<fsParser::Func_bodyContext>(0);
}


size_t fsParser::Func_defContext::getRuleIndex() const {
  return fsParser::RuleFunc_def;
}


std::any fsParser::Func_defContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitFunc_def(this);
  else
    return visitor->visitChildren(this);
}

fsParser::Func_defContext* fsParser::func_def() {
  Func_defContext *_localctx = _tracker.createInstance<Func_defContext>(_ctx, getState());
  enterRule(_localctx, 76, fsParser::RuleFunc_def);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(438);
    match(fsParser::FUNC);
    setState(439);
    match(fsParser::IDEN);
    setState(440);
    match(fsParser::LOPAREN);
    setState(442);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == fsParser::IDEN) {
      setState(441);
      def_params();
    }
    setState(444);
    match(fsParser::ROPAREN);
    setState(453);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == fsParser::EOT) {
      setState(446); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(445);
        match(fsParser::EOT);
        setState(448); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == fsParser::EOT);
      setState(451);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 1973331791769374) != 0)) {
        setState(450);
        func_body();
      }
    }
    setState(455);
    match(fsParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Cond_stmtContext ------------------------------------------------------------------

fsParser::Cond_stmtContext::Cond_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fsParser::Cond_stmtContext::IF() {
  return getToken(fsParser::IF, 0);
}

fsParser::ExprContext* fsParser::Cond_stmtContext::expr() {
  return getRuleContext<fsParser::ExprContext>(0);
}

tree::TerminalNode* fsParser::Cond_stmtContext::THEN() {
  return getToken(fsParser::THEN, 0);
}

tree::TerminalNode* fsParser::Cond_stmtContext::END() {
  return getToken(fsParser::END, 0);
}

std::vector<tree::TerminalNode *> fsParser::Cond_stmtContext::EOT() {
  return getTokens(fsParser::EOT);
}

tree::TerminalNode* fsParser::Cond_stmtContext::EOT(size_t i) {
  return getToken(fsParser::EOT, i);
}

fsParser::Flow_bodyContext* fsParser::Cond_stmtContext::flow_body() {
  return getRuleContext<fsParser::Flow_bodyContext>(0);
}

fsParser::Sub_cond_stmtContext* fsParser::Cond_stmtContext::sub_cond_stmt() {
  return getRuleContext<fsParser::Sub_cond_stmtContext>(0);
}


size_t fsParser::Cond_stmtContext::getRuleIndex() const {
  return fsParser::RuleCond_stmt;
}


std::any fsParser::Cond_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitCond_stmt(this);
  else
    return visitor->visitChildren(this);
}

fsParser::Cond_stmtContext* fsParser::cond_stmt() {
  Cond_stmtContext *_localctx = _tracker.createInstance<Cond_stmtContext>(_ctx, getState());
  enterRule(_localctx, 78, fsParser::RuleCond_stmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(457);
    match(fsParser::IF);
    setState(458);
    expr();
    setState(459);
    match(fsParser::THEN);
    setState(468);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
    case 1: {
      setState(461); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(460);
                match(fsParser::EOT);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(463); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      setState(466);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 1973331791769374) != 0)) {
        setState(465);
        flow_body();
      }
      break;
    }

    default:
      break;
    }
    setState(478);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == fsParser::EOT) {
      setState(471); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(470);
        match(fsParser::EOT);
        setState(473); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == fsParser::EOT);
      setState(476);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fsParser::ELSE) {
        setState(475);
        sub_cond_stmt();
      }
    }
    setState(480);
    match(fsParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sub_cond_stmtContext ------------------------------------------------------------------

fsParser::Sub_cond_stmtContext::Sub_cond_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fsParser::Else_if_stmtContext* fsParser::Sub_cond_stmtContext::else_if_stmt() {
  return getRuleContext<fsParser::Else_if_stmtContext>(0);
}

tree::TerminalNode* fsParser::Sub_cond_stmtContext::ELSE() {
  return getToken(fsParser::ELSE, 0);
}

fsParser::ExprContext* fsParser::Sub_cond_stmtContext::expr() {
  return getRuleContext<fsParser::ExprContext>(0);
}

tree::TerminalNode* fsParser::Sub_cond_stmtContext::THEN() {
  return getToken(fsParser::THEN, 0);
}

fsParser::Flow_bodyContext* fsParser::Sub_cond_stmtContext::flow_body() {
  return getRuleContext<fsParser::Flow_bodyContext>(0);
}


size_t fsParser::Sub_cond_stmtContext::getRuleIndex() const {
  return fsParser::RuleSub_cond_stmt;
}


std::any fsParser::Sub_cond_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitSub_cond_stmt(this);
  else
    return visitor->visitChildren(this);
}

fsParser::Sub_cond_stmtContext* fsParser::sub_cond_stmt() {
  Sub_cond_stmtContext *_localctx = _tracker.createInstance<Sub_cond_stmtContext>(_ctx, getState());
  enterRule(_localctx, 80, fsParser::RuleSub_cond_stmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(489);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(482);
      else_if_stmt();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(483);
      match(fsParser::ELSE);
      setState(484);
      expr();
      setState(485);
      match(fsParser::THEN);
      setState(487);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 1973331791769374) != 0)) {
        setState(486);
        flow_body();
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Else_if_stmtContext ------------------------------------------------------------------

fsParser::Else_if_stmtContext::Else_if_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> fsParser::Else_if_stmtContext::ELSE() {
  return getTokens(fsParser::ELSE);
}

tree::TerminalNode* fsParser::Else_if_stmtContext::ELSE(size_t i) {
  return getToken(fsParser::ELSE, i);
}

std::vector<tree::TerminalNode *> fsParser::Else_if_stmtContext::IF() {
  return getTokens(fsParser::IF);
}

tree::TerminalNode* fsParser::Else_if_stmtContext::IF(size_t i) {
  return getToken(fsParser::IF, i);
}

std::vector<fsParser::ExprContext *> fsParser::Else_if_stmtContext::expr() {
  return getRuleContexts<fsParser::ExprContext>();
}

fsParser::ExprContext* fsParser::Else_if_stmtContext::expr(size_t i) {
  return getRuleContext<fsParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> fsParser::Else_if_stmtContext::THEN() {
  return getTokens(fsParser::THEN);
}

tree::TerminalNode* fsParser::Else_if_stmtContext::THEN(size_t i) {
  return getToken(fsParser::THEN, i);
}

std::vector<fsParser::Flow_bodyContext *> fsParser::Else_if_stmtContext::flow_body() {
  return getRuleContexts<fsParser::Flow_bodyContext>();
}

fsParser::Flow_bodyContext* fsParser::Else_if_stmtContext::flow_body(size_t i) {
  return getRuleContext<fsParser::Flow_bodyContext>(i);
}

std::vector<tree::TerminalNode *> fsParser::Else_if_stmtContext::EOT() {
  return getTokens(fsParser::EOT);
}

tree::TerminalNode* fsParser::Else_if_stmtContext::EOT(size_t i) {
  return getToken(fsParser::EOT, i);
}


size_t fsParser::Else_if_stmtContext::getRuleIndex() const {
  return fsParser::RuleElse_if_stmt;
}


std::any fsParser::Else_if_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitElse_if_stmt(this);
  else
    return visitor->visitChildren(this);
}

fsParser::Else_if_stmtContext* fsParser::else_if_stmt() {
  Else_if_stmtContext *_localctx = _tracker.createInstance<Else_if_stmtContext>(_ctx, getState());
  enterRule(_localctx, 82, fsParser::RuleElse_if_stmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(503); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(491);
      match(fsParser::ELSE);
      setState(492);
      match(fsParser::IF);
      setState(493);
      expr();
      setState(494);
      match(fsParser::THEN);
      setState(496);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 1973331791769374) != 0)) {
        setState(495);
        flow_body();
      }
      setState(499); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(498);
        match(fsParser::EOT);
        setState(501); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == fsParser::EOT);
      setState(505); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == fsParser::ELSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Loop_stmtContext ------------------------------------------------------------------

fsParser::Loop_stmtContext::Loop_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fsParser::Loop_stmtContext::LOOP() {
  return getToken(fsParser::LOOP, 0);
}

tree::TerminalNode* fsParser::Loop_stmtContext::DO() {
  return getToken(fsParser::DO, 0);
}

tree::TerminalNode* fsParser::Loop_stmtContext::END() {
  return getToken(fsParser::END, 0);
}

std::vector<tree::TerminalNode *> fsParser::Loop_stmtContext::EOT() {
  return getTokens(fsParser::EOT);
}

tree::TerminalNode* fsParser::Loop_stmtContext::EOT(size_t i) {
  return getToken(fsParser::EOT, i);
}

fsParser::Flow_bodyContext* fsParser::Loop_stmtContext::flow_body() {
  return getRuleContext<fsParser::Flow_bodyContext>(0);
}


size_t fsParser::Loop_stmtContext::getRuleIndex() const {
  return fsParser::RuleLoop_stmt;
}


std::any fsParser::Loop_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitLoop_stmt(this);
  else
    return visitor->visitChildren(this);
}

fsParser::Loop_stmtContext* fsParser::loop_stmt() {
  Loop_stmtContext *_localctx = _tracker.createInstance<Loop_stmtContext>(_ctx, getState());
  enterRule(_localctx, 84, fsParser::RuleLoop_stmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(507);
    match(fsParser::LOOP);
    setState(508);
    match(fsParser::DO);
    setState(517);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == fsParser::EOT) {
      setState(510); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(509);
        match(fsParser::EOT);
        setState(512); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == fsParser::EOT);
      setState(515);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 1973331791769374) != 0)) {
        setState(514);
        flow_body();
      }
    }
    setState(519);
    match(fsParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Flow_bodyContext ------------------------------------------------------------------

fsParser::Flow_bodyContext::Flow_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<fsParser::StmtContext *> fsParser::Flow_bodyContext::stmt() {
  return getRuleContexts<fsParser::StmtContext>();
}

fsParser::StmtContext* fsParser::Flow_bodyContext::stmt(size_t i) {
  return getRuleContext<fsParser::StmtContext>(i);
}

std::vector<fsParser::ExprContext *> fsParser::Flow_bodyContext::expr() {
  return getRuleContexts<fsParser::ExprContext>();
}

fsParser::ExprContext* fsParser::Flow_bodyContext::expr(size_t i) {
  return getRuleContext<fsParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> fsParser::Flow_bodyContext::EOT() {
  return getTokens(fsParser::EOT);
}

tree::TerminalNode* fsParser::Flow_bodyContext::EOT(size_t i) {
  return getToken(fsParser::EOT, i);
}


size_t fsParser::Flow_bodyContext::getRuleIndex() const {
  return fsParser::RuleFlow_body;
}


std::any fsParser::Flow_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitFlow_body(this);
  else
    return visitor->visitChildren(this);
}

fsParser::Flow_bodyContext* fsParser::flow_body() {
  Flow_bodyContext *_localctx = _tracker.createInstance<Flow_bodyContext>(_ctx, getState());
  enterRule(_localctx, 86, fsParser::RuleFlow_body);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(530); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(523);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case fsParser::BREAK:
        case fsParser::CLASS:
        case fsParser::CONST:
        case fsParser::CONTINUE:
        case fsParser::DEFINE:
        case fsParser::DELETE:
        case fsParser::FUNC:
        case fsParser::IF:
        case fsParser::IGNORE:
        case fsParser::INCLUDE:
        case fsParser::LOOP:
        case fsParser::MUT:
        case fsParser::RETURN: {
          setState(521);
          stmt();
          break;
        }

        case fsParser::STRING:
        case fsParser::NUMBER:
        case fsParser::BOOL:
        case fsParser::NIL:
        case fsParser::DECL:
        case fsParser::NEW:
        case fsParser::THIS:
        case fsParser::IDEN:
        case fsParser::LOPAREN:
        case fsParser::LCPAREN:
        case fsParser::LPAREN:
        case fsParser::PLUS:
        case fsParser::MINUS:
        case fsParser::STAR: {
          setState(522);
          expr();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(526); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(525);
                match(fsParser::EOT);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(528); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      setState(532); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1973331791769374) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Import_stmtContext ------------------------------------------------------------------

fsParser::Import_stmtContext::Import_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fsParser::Import_stmtContext::INCLUDE() {
  return getToken(fsParser::INCLUDE, 0);
}

tree::TerminalNode* fsParser::Import_stmtContext::IDEN() {
  return getToken(fsParser::IDEN, 0);
}

tree::TerminalNode* fsParser::Import_stmtContext::STRING() {
  return getToken(fsParser::STRING, 0);
}


size_t fsParser::Import_stmtContext::getRuleIndex() const {
  return fsParser::RuleImport_stmt;
}


std::any fsParser::Import_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitImport_stmt(this);
  else
    return visitor->visitChildren(this);
}

fsParser::Import_stmtContext* fsParser::import_stmt() {
  Import_stmtContext *_localctx = _tracker.createInstance<Import_stmtContext>(_ctx, getState());
  enterRule(_localctx, 88, fsParser::RuleImport_stmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(534);
    match(fsParser::INCLUDE);
    setState(535);
    _la = _input->LA(1);
    if (!(_la == fsParser::STRING

    || _la == fsParser::IDEN)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Define_stmtContext ------------------------------------------------------------------

fsParser::Define_stmtContext::Define_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fsParser::Define_stmtContext::DEFINE() {
  return getToken(fsParser::DEFINE, 0);
}

tree::TerminalNode* fsParser::Define_stmtContext::IDEN() {
  return getToken(fsParser::IDEN, 0);
}

fsParser::ExprContext* fsParser::Define_stmtContext::expr() {
  return getRuleContext<fsParser::ExprContext>(0);
}

fsParser::StmtContext* fsParser::Define_stmtContext::stmt() {
  return getRuleContext<fsParser::StmtContext>(0);
}


size_t fsParser::Define_stmtContext::getRuleIndex() const {
  return fsParser::RuleDefine_stmt;
}


std::any fsParser::Define_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitDefine_stmt(this);
  else
    return visitor->visitChildren(this);
}

fsParser::Define_stmtContext* fsParser::define_stmt() {
  Define_stmtContext *_localctx = _tracker.createInstance<Define_stmtContext>(_ctx, getState());
  enterRule(_localctx, 90, fsParser::RuleDefine_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(537);
    match(fsParser::DEFINE);
    setState(538);
    match(fsParser::IDEN);
    setState(541);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case fsParser::STRING:
      case fsParser::NUMBER:
      case fsParser::BOOL:
      case fsParser::NIL:
      case fsParser::DECL:
      case fsParser::NEW:
      case fsParser::THIS:
      case fsParser::IDEN:
      case fsParser::LOPAREN:
      case fsParser::LCPAREN:
      case fsParser::LPAREN:
      case fsParser::PLUS:
      case fsParser::MINUS:
      case fsParser::STAR: {
        setState(539);
        expr();
        break;
      }

      case fsParser::BREAK:
      case fsParser::CLASS:
      case fsParser::CONST:
      case fsParser::CONTINUE:
      case fsParser::DEFINE:
      case fsParser::DELETE:
      case fsParser::FUNC:
      case fsParser::IF:
      case fsParser::IGNORE:
      case fsParser::INCLUDE:
      case fsParser::LOOP:
      case fsParser::MUT:
      case fsParser::RETURN: {
        setState(540);
        stmt();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Member_accessContext ------------------------------------------------------------------

fsParser::Member_accessContext::Member_accessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fsParser::Class_object_initContext* fsParser::Member_accessContext::class_object_init() {
  return getRuleContext<fsParser::Class_object_initContext>(0);
}

tree::TerminalNode* fsParser::Member_accessContext::IDEN() {
  return getToken(fsParser::IDEN, 0);
}

std::vector<tree::TerminalNode *> fsParser::Member_accessContext::DOT() {
  return getTokens(fsParser::DOT);
}

tree::TerminalNode* fsParser::Member_accessContext::DOT(size_t i) {
  return getToken(fsParser::DOT, i);
}

std::vector<fsParser::TernaryExprContext *> fsParser::Member_accessContext::ternaryExpr() {
  return getRuleContexts<fsParser::TernaryExprContext>();
}

fsParser::TernaryExprContext* fsParser::Member_accessContext::ternaryExpr(size_t i) {
  return getRuleContext<fsParser::TernaryExprContext>(i);
}


size_t fsParser::Member_accessContext::getRuleIndex() const {
  return fsParser::RuleMember_access;
}


std::any fsParser::Member_accessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitMember_access(this);
  else
    return visitor->visitChildren(this);
}

fsParser::Member_accessContext* fsParser::member_access() {
  Member_accessContext *_localctx = _tracker.createInstance<Member_accessContext>(_ctx, getState());
  enterRule(_localctx, 92, fsParser::RuleMember_access);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(545);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case fsParser::NEW: {
        setState(543);
        class_object_init();
        break;
      }

      case fsParser::IDEN: {
        setState(544);
        match(fsParser::IDEN);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(549); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(547);
              match(fsParser::DOT);
              setState(548);
              ternaryExpr();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(551); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeobjectContext ------------------------------------------------------------------

fsParser::TypeobjectContext::TypeobjectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fsParser::TypeobjectContext::STRING() {
  return getToken(fsParser::STRING, 0);
}

tree::TerminalNode* fsParser::TypeobjectContext::NUMBER() {
  return getToken(fsParser::NUMBER, 0);
}

tree::TerminalNode* fsParser::TypeobjectContext::BOOL() {
  return getToken(fsParser::BOOL, 0);
}

tree::TerminalNode* fsParser::TypeobjectContext::NIL() {
  return getToken(fsParser::NIL, 0);
}


size_t fsParser::TypeobjectContext::getRuleIndex() const {
  return fsParser::RuleTypeobject;
}


std::any fsParser::TypeobjectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitTypeobject(this);
  else
    return visitor->visitChildren(this);
}

fsParser::TypeobjectContext* fsParser::typeobject() {
  TypeobjectContext *_localctx = _tracker.createInstance<TypeobjectContext>(_ctx, getState());
  enterRule(_localctx, 94, fsParser::RuleTypeobject);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(553);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 30) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ObjectContext ------------------------------------------------------------------

fsParser::ObjectContext::ObjectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fsParser::TypeobjectContext* fsParser::ObjectContext::typeobject() {
  return getRuleContext<fsParser::TypeobjectContext>(0);
}

fsParser::ContainerContext* fsParser::ObjectContext::container() {
  return getRuleContext<fsParser::ContainerContext>(0);
}

fsParser::MapContext* fsParser::ObjectContext::map() {
  return getRuleContext<fsParser::MapContext>(0);
}

tree::TerminalNode* fsParser::ObjectContext::IDEN() {
  return getToken(fsParser::IDEN, 0);
}


size_t fsParser::ObjectContext::getRuleIndex() const {
  return fsParser::RuleObject;
}


std::any fsParser::ObjectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitObject(this);
  else
    return visitor->visitChildren(this);
}

fsParser::ObjectContext* fsParser::object() {
  ObjectContext *_localctx = _tracker.createInstance<ObjectContext>(_ctx, getState());
  enterRule(_localctx, 96, fsParser::RuleObject);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(559);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case fsParser::STRING:
      case fsParser::NUMBER:
      case fsParser::BOOL:
      case fsParser::NIL: {
        enterOuterAlt(_localctx, 1);
        setState(555);
        typeobject();
        break;
      }

      case fsParser::LCPAREN: {
        enterOuterAlt(_localctx, 2);
        setState(556);
        container();
        break;
      }

      case fsParser::LPAREN: {
        enterOuterAlt(_localctx, 3);
        setState(557);
        map();
        break;
      }

      case fsParser::IDEN: {
        enterOuterAlt(_localctx, 4);
        setState(558);
        match(fsParser::IDEN);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool fsParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 5: return or_opSempred(antlrcpp::downCast<Or_opContext *>(context), predicateIndex);
    case 6: return is_not_opSempred(antlrcpp::downCast<Is_not_opContext *>(context), predicateIndex);
    case 7: return isnt_opSempred(antlrcpp::downCast<Isnt_opContext *>(context), predicateIndex);
    case 8: return and_opSempred(antlrcpp::downCast<And_opContext *>(context), predicateIndex);
    case 9: return gt_opSempred(antlrcpp::downCast<Gt_opContext *>(context), predicateIndex);
    case 10: return add_opSempred(antlrcpp::downCast<Add_opContext *>(context), predicateIndex);
    case 11: return mul_opSempred(antlrcpp::downCast<Mul_opContext *>(context), predicateIndex);
    case 12: return exponent_opSempred(antlrcpp::downCast<Exponent_opContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool fsParser::or_opSempred(Or_opContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool fsParser::is_not_opSempred(Is_not_opContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool fsParser::isnt_opSempred(Isnt_opContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool fsParser::and_opSempred(And_opContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool fsParser::gt_opSempred(Gt_opContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 4: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool fsParser::add_opSempred(Add_opContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 5: return precpred(_ctx, 2);
    case 6: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool fsParser::mul_opSempred(Mul_opContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 7: return precpred(_ctx, 4);
    case 8: return precpred(_ctx, 3);
    case 9: return precpred(_ctx, 2);
    case 10: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool fsParser::exponent_opSempred(Exponent_opContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 11: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void fsParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  fsParserInitialize();
#else
  ::antlr4::internal::call_once(fsParserOnceFlag, fsParserInitialize);
#endif
}
