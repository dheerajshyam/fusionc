
// Generated from fs.g4 by ANTLR 4.13.1


#include "fsVisitor.h"

#include "fsParser.h"


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
      "COMMENT", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,62,583,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,1,0,1,
  	0,3,0,101,8,0,1,0,4,0,104,8,0,11,0,12,0,105,4,0,108,8,0,11,0,12,0,109,
  	1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,121,8,2,1,3,1,3,1,3,1,3,3,3,127,
  	8,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,3,4,136,8,4,1,5,1,5,1,5,1,5,1,5,1,5,5,
  	5,144,8,5,10,5,12,5,147,9,5,1,6,1,6,1,6,1,6,1,6,1,6,5,6,155,8,6,10,6,
  	12,6,158,9,6,1,7,1,7,1,7,1,7,1,7,1,7,5,7,166,8,7,10,7,12,7,169,9,7,1,
  	8,1,8,1,8,1,8,1,8,1,8,5,8,177,8,8,10,8,12,8,180,9,8,1,9,1,9,1,9,1,9,1,
  	9,1,9,5,9,188,8,9,10,9,12,9,191,9,9,1,10,1,10,1,10,1,10,1,10,1,10,1,10,
  	1,10,1,10,5,10,202,8,10,10,10,12,10,205,9,10,1,11,1,11,1,11,1,11,1,11,
  	1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,5,11,222,8,11,10,11,
  	12,11,225,9,11,1,12,1,12,1,12,1,12,1,12,1,12,5,12,233,8,12,10,12,12,12,
  	236,9,12,1,13,1,13,1,13,1,13,1,13,4,13,243,8,13,11,13,12,13,244,1,13,
  	1,13,1,13,3,13,250,8,13,1,13,4,13,253,8,13,11,13,12,13,254,1,13,1,13,
  	1,13,3,13,260,8,13,1,13,1,13,1,13,1,13,1,13,1,13,3,13,268,8,13,1,14,1,
  	14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,3,14,282,8,14,1,
  	15,1,15,1,15,5,15,287,8,15,10,15,12,15,290,9,15,3,15,292,8,15,1,16,1,
  	16,1,17,1,17,1,17,1,18,1,18,1,18,5,18,302,8,18,10,18,12,18,305,9,18,1,
  	19,1,19,3,19,309,8,19,1,19,1,19,1,20,1,20,1,20,1,20,1,20,5,20,318,8,20,
  	10,20,12,20,321,9,20,1,21,1,21,3,21,325,8,21,1,21,1,21,1,22,1,22,1,22,
  	1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,3,22,342,8,22,1,23,
  	1,23,1,23,5,23,347,8,23,10,23,12,23,350,9,23,1,24,1,24,1,24,1,24,3,24,
  	356,8,24,1,24,3,24,359,8,24,1,24,1,24,1,25,1,25,3,25,365,8,25,1,25,4,
  	25,368,8,25,11,25,12,25,369,1,25,3,25,373,8,25,1,26,1,26,1,26,3,26,378,
  	8,26,1,26,1,26,3,26,382,8,26,1,26,1,26,1,27,1,27,1,27,1,27,1,27,1,27,
  	1,27,1,27,1,27,1,27,1,27,3,27,397,8,27,1,28,1,28,1,28,1,28,1,29,1,29,
  	1,29,1,30,1,30,1,30,1,30,1,30,1,31,1,31,1,31,3,31,414,8,31,1,32,1,32,
  	1,32,1,32,1,32,1,32,3,32,422,8,32,1,32,4,32,425,8,32,11,32,12,32,426,
  	1,32,5,32,430,8,32,10,32,12,32,433,9,32,1,33,1,33,1,33,1,34,1,34,1,34,
  	1,35,1,35,1,35,1,36,1,36,1,36,1,37,1,37,3,37,449,8,37,1,37,4,37,452,8,
  	37,11,37,12,37,453,4,37,456,8,37,11,37,12,37,457,1,38,1,38,1,38,1,38,
  	3,38,464,8,38,1,38,1,38,4,38,468,8,38,11,38,12,38,469,1,38,3,38,473,8,
  	38,3,38,475,8,38,1,38,1,38,1,39,1,39,1,39,1,39,4,39,483,8,39,11,39,12,
  	39,484,1,39,3,39,488,8,39,3,39,490,8,39,1,39,4,39,493,8,39,11,39,12,39,
  	494,1,39,3,39,498,8,39,3,39,500,8,39,1,39,1,39,1,40,1,40,1,40,1,40,1,
  	40,3,40,509,8,40,3,40,511,8,40,1,41,1,41,1,41,1,41,1,41,3,41,518,8,41,
  	1,41,4,41,521,8,41,11,41,12,41,522,4,41,525,8,41,11,41,12,41,526,1,42,
  	1,42,1,42,4,42,532,8,42,11,42,12,42,533,1,42,3,42,537,8,42,3,42,539,8,
  	42,1,42,1,42,1,43,1,43,3,43,545,8,43,1,43,4,43,548,8,43,11,43,12,43,549,
  	4,43,552,8,43,11,43,12,43,553,1,44,1,44,1,44,1,45,1,45,1,45,1,45,3,45,
  	563,8,45,1,46,1,46,3,46,567,8,46,1,46,1,46,4,46,571,8,46,11,46,12,46,
  	572,1,47,1,47,1,48,1,48,1,48,1,48,3,48,581,8,48,1,48,0,8,10,12,14,16,
  	18,20,22,24,49,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,
  	40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78,80,82,84,
  	86,88,90,92,94,96,0,4,2,0,24,24,29,29,1,0,44,47,2,0,1,1,36,36,1,0,1,4,
  	633,0,107,1,0,0,0,2,111,1,0,0,0,4,120,1,0,0,0,6,126,1,0,0,0,8,135,1,0,
  	0,0,10,137,1,0,0,0,12,148,1,0,0,0,14,159,1,0,0,0,16,170,1,0,0,0,18,181,
  	1,0,0,0,20,192,1,0,0,0,22,206,1,0,0,0,24,226,1,0,0,0,26,267,1,0,0,0,28,
  	281,1,0,0,0,30,291,1,0,0,0,32,293,1,0,0,0,34,295,1,0,0,0,36,298,1,0,0,
  	0,38,306,1,0,0,0,40,312,1,0,0,0,42,322,1,0,0,0,44,341,1,0,0,0,46,343,
  	1,0,0,0,48,351,1,0,0,0,50,364,1,0,0,0,52,374,1,0,0,0,54,396,1,0,0,0,56,
  	398,1,0,0,0,58,402,1,0,0,0,60,405,1,0,0,0,62,410,1,0,0,0,64,421,1,0,0,
  	0,66,434,1,0,0,0,68,437,1,0,0,0,70,440,1,0,0,0,72,443,1,0,0,0,74,455,
  	1,0,0,0,76,459,1,0,0,0,78,478,1,0,0,0,80,510,1,0,0,0,82,524,1,0,0,0,84,
  	528,1,0,0,0,86,551,1,0,0,0,88,555,1,0,0,0,90,558,1,0,0,0,92,566,1,0,0,
  	0,94,574,1,0,0,0,96,580,1,0,0,0,98,101,3,2,1,0,99,101,3,44,22,0,100,98,
  	1,0,0,0,100,99,1,0,0,0,101,103,1,0,0,0,102,104,5,60,0,0,103,102,1,0,0,
  	0,104,105,1,0,0,0,105,103,1,0,0,0,105,106,1,0,0,0,106,108,1,0,0,0,107,
  	100,1,0,0,0,108,109,1,0,0,0,109,107,1,0,0,0,109,110,1,0,0,0,110,1,1,0,
  	0,0,111,112,3,4,2,0,112,3,1,0,0,0,113,121,3,6,3,0,114,115,3,6,3,0,115,
  	116,5,20,0,0,116,117,3,4,2,0,117,118,5,17,0,0,118,119,3,4,2,0,119,121,
  	1,0,0,0,120,113,1,0,0,0,120,114,1,0,0,0,121,5,1,0,0,0,122,127,3,8,4,0,
  	123,127,3,92,46,0,124,127,3,56,28,0,125,127,3,10,5,0,126,122,1,0,0,0,
  	126,123,1,0,0,0,126,124,1,0,0,0,126,125,1,0,0,0,127,7,1,0,0,0,128,129,
  	5,36,0,0,129,130,5,43,0,0,130,136,3,4,2,0,131,132,3,56,28,0,132,133,5,
  	43,0,0,133,134,3,4,2,0,134,136,1,0,0,0,135,128,1,0,0,0,135,131,1,0,0,
  	0,136,9,1,0,0,0,137,138,6,5,-1,0,138,139,3,12,6,0,139,145,1,0,0,0,140,
  	141,10,1,0,0,141,142,5,30,0,0,142,144,3,12,6,0,143,140,1,0,0,0,144,147,
  	1,0,0,0,145,143,1,0,0,0,145,146,1,0,0,0,146,11,1,0,0,0,147,145,1,0,0,
  	0,148,149,6,6,-1,0,149,150,3,14,7,0,150,156,1,0,0,0,151,152,10,1,0,0,
  	152,153,7,0,0,0,153,155,3,14,7,0,154,151,1,0,0,0,155,158,1,0,0,0,156,
  	154,1,0,0,0,156,157,1,0,0,0,157,13,1,0,0,0,158,156,1,0,0,0,159,160,6,
  	7,-1,0,160,161,3,16,8,0,161,167,1,0,0,0,162,163,10,1,0,0,163,164,5,25,
  	0,0,164,166,3,16,8,0,165,162,1,0,0,0,166,169,1,0,0,0,167,165,1,0,0,0,
  	167,168,1,0,0,0,168,15,1,0,0,0,169,167,1,0,0,0,170,171,6,8,-1,0,171,172,
  	3,18,9,0,172,178,1,0,0,0,173,174,10,1,0,0,174,175,5,7,0,0,175,177,3,18,
  	9,0,176,173,1,0,0,0,177,180,1,0,0,0,178,176,1,0,0,0,178,179,1,0,0,0,179,
  	17,1,0,0,0,180,178,1,0,0,0,181,182,6,9,-1,0,182,183,3,20,10,0,183,189,
  	1,0,0,0,184,185,10,1,0,0,185,186,7,1,0,0,186,188,3,20,10,0,187,184,1,
  	0,0,0,188,191,1,0,0,0,189,187,1,0,0,0,189,190,1,0,0,0,190,19,1,0,0,0,
  	191,189,1,0,0,0,192,193,6,10,-1,0,193,194,3,22,11,0,194,203,1,0,0,0,195,
  	196,10,2,0,0,196,197,5,48,0,0,197,202,3,22,11,0,198,199,10,1,0,0,199,
  	200,5,49,0,0,200,202,3,22,11,0,201,195,1,0,0,0,201,198,1,0,0,0,202,205,
  	1,0,0,0,203,201,1,0,0,0,203,204,1,0,0,0,204,21,1,0,0,0,205,203,1,0,0,
  	0,206,207,6,11,-1,0,207,208,3,24,12,0,208,223,1,0,0,0,209,210,10,4,0,
  	0,210,211,5,50,0,0,211,222,3,24,12,0,212,213,10,3,0,0,213,214,5,51,0,
  	0,214,222,3,24,12,0,215,216,10,2,0,0,216,217,5,59,0,0,217,222,3,24,12,
  	0,218,219,10,1,0,0,219,220,5,52,0,0,220,222,3,24,12,0,221,209,1,0,0,0,
  	221,212,1,0,0,0,221,215,1,0,0,0,221,218,1,0,0,0,222,225,1,0,0,0,223,221,
  	1,0,0,0,223,224,1,0,0,0,224,23,1,0,0,0,225,223,1,0,0,0,226,227,6,12,-1,
  	0,227,228,3,26,13,0,228,234,1,0,0,0,229,230,10,1,0,0,230,231,5,58,0,0,
  	231,233,3,26,13,0,232,229,1,0,0,0,233,236,1,0,0,0,234,232,1,0,0,0,234,
  	235,1,0,0,0,235,25,1,0,0,0,236,234,1,0,0,0,237,268,3,96,48,0,238,268,
  	3,28,14,0,239,268,3,34,17,0,240,268,3,54,27,0,241,243,5,48,0,0,242,241,
  	1,0,0,0,243,244,1,0,0,0,244,242,1,0,0,0,244,245,1,0,0,0,245,249,1,0,0,
  	0,246,250,3,26,13,0,247,250,3,6,3,0,248,250,3,4,2,0,249,246,1,0,0,0,249,
  	247,1,0,0,0,249,248,1,0,0,0,250,268,1,0,0,0,251,253,5,49,0,0,252,251,
  	1,0,0,0,253,254,1,0,0,0,254,252,1,0,0,0,254,255,1,0,0,0,255,259,1,0,0,
  	0,256,260,3,26,13,0,257,260,3,6,3,0,258,260,3,4,2,0,259,256,1,0,0,0,259,
  	257,1,0,0,0,259,258,1,0,0,0,260,268,1,0,0,0,261,262,5,50,0,0,262,268,
  	3,4,2,0,263,264,5,37,0,0,264,265,3,4,2,0,265,266,5,38,0,0,266,268,1,0,
  	0,0,267,237,1,0,0,0,267,238,1,0,0,0,267,239,1,0,0,0,267,240,1,0,0,0,267,
  	242,1,0,0,0,267,252,1,0,0,0,267,261,1,0,0,0,267,263,1,0,0,0,268,27,1,
  	0,0,0,269,270,3,96,48,0,270,271,5,37,0,0,271,272,5,38,0,0,272,282,1,0,
  	0,0,273,274,3,96,48,0,274,275,5,37,0,0,275,276,3,30,15,0,276,277,5,38,
  	0,0,277,282,1,0,0,0,278,279,3,96,48,0,279,280,3,30,15,0,280,282,1,0,0,
  	0,281,269,1,0,0,0,281,273,1,0,0,0,281,278,1,0,0,0,282,29,1,0,0,0,283,
  	292,3,32,16,0,284,285,5,53,0,0,285,287,3,32,16,0,286,284,1,0,0,0,287,
  	290,1,0,0,0,288,286,1,0,0,0,288,289,1,0,0,0,289,292,1,0,0,0,290,288,1,
  	0,0,0,291,283,1,0,0,0,291,288,1,0,0,0,292,31,1,0,0,0,293,294,3,4,2,0,
  	294,33,1,0,0,0,295,296,5,13,0,0,296,297,5,36,0,0,297,35,1,0,0,0,298,303,
  	3,4,2,0,299,300,5,53,0,0,300,302,3,36,18,0,301,299,1,0,0,0,302,305,1,
  	0,0,0,303,301,1,0,0,0,303,304,1,0,0,0,304,37,1,0,0,0,305,303,1,0,0,0,
  	306,308,5,39,0,0,307,309,3,36,18,0,308,307,1,0,0,0,308,309,1,0,0,0,309,
  	310,1,0,0,0,310,311,5,40,0,0,311,39,1,0,0,0,312,313,5,1,0,0,313,314,5,
  	54,0,0,314,319,3,4,2,0,315,316,5,53,0,0,316,318,3,40,20,0,317,315,1,0,
  	0,0,318,321,1,0,0,0,319,317,1,0,0,0,319,320,1,0,0,0,320,41,1,0,0,0,321,
  	319,1,0,0,0,322,324,5,41,0,0,323,325,3,40,20,0,324,323,1,0,0,0,324,325,
  	1,0,0,0,325,326,1,0,0,0,326,327,5,42,0,0,327,43,1,0,0,0,328,342,5,8,0,
  	0,329,342,5,11,0,0,330,342,5,21,0,0,331,342,3,76,38,0,332,342,3,48,24,
  	0,333,342,3,78,39,0,334,342,3,84,42,0,335,342,3,88,44,0,336,342,3,70,
  	35,0,337,342,3,72,36,0,338,342,3,66,33,0,339,342,3,68,34,0,340,342,3,
  	90,45,0,341,328,1,0,0,0,341,329,1,0,0,0,341,330,1,0,0,0,341,331,1,0,0,
  	0,341,332,1,0,0,0,341,333,1,0,0,0,341,334,1,0,0,0,341,335,1,0,0,0,341,
  	336,1,0,0,0,341,337,1,0,0,0,341,338,1,0,0,0,341,339,1,0,0,0,341,340,1,
  	0,0,0,342,45,1,0,0,0,343,348,5,36,0,0,344,345,5,53,0,0,345,347,3,46,23,
  	0,346,344,1,0,0,0,347,350,1,0,0,0,348,346,1,0,0,0,348,349,1,0,0,0,349,
  	47,1,0,0,0,350,348,1,0,0,0,351,352,5,9,0,0,352,355,5,36,0,0,353,354,5,
  	23,0,0,354,356,5,36,0,0,355,353,1,0,0,0,355,356,1,0,0,0,356,358,1,0,0,
  	0,357,359,3,64,32,0,358,357,1,0,0,0,358,359,1,0,0,0,359,360,1,0,0,0,360,
  	361,5,18,0,0,361,49,1,0,0,0,362,365,3,4,2,0,363,365,3,44,22,0,364,362,
  	1,0,0,0,364,363,1,0,0,0,365,367,1,0,0,0,366,368,5,60,0,0,367,366,1,0,
  	0,0,368,369,1,0,0,0,369,367,1,0,0,0,369,370,1,0,0,0,370,372,1,0,0,0,371,
  	373,3,50,25,0,372,371,1,0,0,0,372,373,1,0,0,0,373,51,1,0,0,0,374,375,
  	5,12,0,0,375,377,5,37,0,0,376,378,3,46,23,0,377,376,1,0,0,0,377,378,1,
  	0,0,0,378,379,1,0,0,0,379,381,5,38,0,0,380,382,3,50,25,0,381,380,1,0,
  	0,0,381,382,1,0,0,0,382,383,1,0,0,0,383,384,5,18,0,0,384,53,1,0,0,0,385,
  	386,5,28,0,0,386,387,3,96,48,0,387,388,5,37,0,0,388,389,5,38,0,0,389,
  	397,1,0,0,0,390,391,5,28,0,0,391,392,3,96,48,0,392,393,5,37,0,0,393,394,
  	3,30,15,0,394,395,5,38,0,0,395,397,1,0,0,0,396,385,1,0,0,0,396,390,1,
  	0,0,0,397,55,1,0,0,0,398,399,5,34,0,0,399,400,5,55,0,0,400,401,3,4,2,
  	0,401,57,1,0,0,0,402,403,5,32,0,0,403,404,3,76,38,0,404,59,1,0,0,0,405,
  	406,5,31,0,0,406,407,5,37,0,0,407,408,3,76,38,0,408,409,5,38,0,0,409,
  	61,1,0,0,0,410,413,5,5,0,0,411,414,3,76,38,0,412,414,3,34,17,0,413,411,
  	1,0,0,0,413,412,1,0,0,0,414,63,1,0,0,0,415,422,3,52,26,0,416,422,3,76,
  	38,0,417,422,3,34,17,0,418,422,3,58,29,0,419,422,3,60,30,0,420,422,3,
  	62,31,0,421,415,1,0,0,0,421,416,1,0,0,0,421,417,1,0,0,0,421,418,1,0,0,
  	0,421,419,1,0,0,0,421,420,1,0,0,0,422,431,1,0,0,0,423,425,5,60,0,0,424,
  	423,1,0,0,0,425,426,1,0,0,0,426,424,1,0,0,0,426,427,1,0,0,0,427,428,1,
  	0,0,0,428,430,3,64,32,0,429,424,1,0,0,0,430,433,1,0,0,0,431,429,1,0,0,
  	0,431,432,1,0,0,0,432,65,1,0,0,0,433,431,1,0,0,0,434,435,5,15,0,0,435,
  	436,5,36,0,0,436,67,1,0,0,0,437,438,5,35,0,0,438,439,3,2,1,0,439,69,1,
  	0,0,0,440,441,5,27,0,0,441,442,3,44,22,0,442,71,1,0,0,0,443,444,5,10,
  	0,0,444,445,3,44,22,0,445,73,1,0,0,0,446,449,3,4,2,0,447,449,3,44,22,
  	0,448,446,1,0,0,0,448,447,1,0,0,0,449,451,1,0,0,0,450,452,5,60,0,0,451,
  	450,1,0,0,0,452,453,1,0,0,0,453,451,1,0,0,0,453,454,1,0,0,0,454,456,1,
  	0,0,0,455,448,1,0,0,0,456,457,1,0,0,0,457,455,1,0,0,0,457,458,1,0,0,0,
  	458,75,1,0,0,0,459,460,5,19,0,0,460,461,5,36,0,0,461,463,5,37,0,0,462,
  	464,3,46,23,0,463,462,1,0,0,0,463,464,1,0,0,0,464,465,1,0,0,0,465,474,
  	5,38,0,0,466,468,5,60,0,0,467,466,1,0,0,0,468,469,1,0,0,0,469,467,1,0,
  	0,0,469,470,1,0,0,0,470,472,1,0,0,0,471,473,3,74,37,0,472,471,1,0,0,0,
  	472,473,1,0,0,0,473,475,1,0,0,0,474,467,1,0,0,0,474,475,1,0,0,0,475,476,
  	1,0,0,0,476,477,5,18,0,0,477,77,1,0,0,0,478,479,5,20,0,0,479,480,3,2,
  	1,0,480,489,5,33,0,0,481,483,5,60,0,0,482,481,1,0,0,0,483,484,1,0,0,0,
  	484,482,1,0,0,0,484,485,1,0,0,0,485,487,1,0,0,0,486,488,3,86,43,0,487,
  	486,1,0,0,0,487,488,1,0,0,0,488,490,1,0,0,0,489,482,1,0,0,0,489,490,1,
  	0,0,0,490,499,1,0,0,0,491,493,5,60,0,0,492,491,1,0,0,0,493,494,1,0,0,
  	0,494,492,1,0,0,0,494,495,1,0,0,0,495,497,1,0,0,0,496,498,3,80,40,0,497,
  	496,1,0,0,0,497,498,1,0,0,0,498,500,1,0,0,0,499,492,1,0,0,0,499,500,1,
  	0,0,0,500,501,1,0,0,0,501,502,5,18,0,0,502,79,1,0,0,0,503,511,3,82,41,
  	0,504,505,5,17,0,0,505,506,3,2,1,0,506,508,5,33,0,0,507,509,3,86,43,0,
  	508,507,1,0,0,0,508,509,1,0,0,0,509,511,1,0,0,0,510,503,1,0,0,0,510,504,
  	1,0,0,0,511,81,1,0,0,0,512,513,5,17,0,0,513,514,5,20,0,0,514,515,3,2,
  	1,0,515,517,5,33,0,0,516,518,3,86,43,0,517,516,1,0,0,0,517,518,1,0,0,
  	0,518,520,1,0,0,0,519,521,5,60,0,0,520,519,1,0,0,0,521,522,1,0,0,0,522,
  	520,1,0,0,0,522,523,1,0,0,0,523,525,1,0,0,0,524,512,1,0,0,0,525,526,1,
  	0,0,0,526,524,1,0,0,0,526,527,1,0,0,0,527,83,1,0,0,0,528,529,5,26,0,0,
  	529,538,5,16,0,0,530,532,5,60,0,0,531,530,1,0,0,0,532,533,1,0,0,0,533,
  	531,1,0,0,0,533,534,1,0,0,0,534,536,1,0,0,0,535,537,3,86,43,0,536,535,
  	1,0,0,0,536,537,1,0,0,0,537,539,1,0,0,0,538,531,1,0,0,0,538,539,1,0,0,
  	0,539,540,1,0,0,0,540,541,5,18,0,0,541,85,1,0,0,0,542,545,3,44,22,0,543,
  	545,3,2,1,0,544,542,1,0,0,0,544,543,1,0,0,0,545,547,1,0,0,0,546,548,5,
  	60,0,0,547,546,1,0,0,0,548,549,1,0,0,0,549,547,1,0,0,0,549,550,1,0,0,
  	0,550,552,1,0,0,0,551,544,1,0,0,0,552,553,1,0,0,0,553,551,1,0,0,0,553,
  	554,1,0,0,0,554,87,1,0,0,0,555,556,5,22,0,0,556,557,7,2,0,0,557,89,1,
  	0,0,0,558,559,5,14,0,0,559,562,5,36,0,0,560,563,3,2,1,0,561,563,3,44,
  	22,0,562,560,1,0,0,0,562,561,1,0,0,0,563,91,1,0,0,0,564,567,3,54,27,0,
  	565,567,5,36,0,0,566,564,1,0,0,0,566,565,1,0,0,0,567,570,1,0,0,0,568,
  	569,5,55,0,0,569,571,3,4,2,0,570,568,1,0,0,0,571,572,1,0,0,0,572,570,
  	1,0,0,0,572,573,1,0,0,0,573,93,1,0,0,0,574,575,7,3,0,0,575,95,1,0,0,0,
  	576,581,3,94,47,0,577,581,3,38,19,0,578,581,3,42,21,0,579,581,5,36,0,
  	0,580,576,1,0,0,0,580,577,1,0,0,0,580,578,1,0,0,0,580,579,1,0,0,0,581,
  	97,1,0,0,0,70,100,105,109,120,126,135,145,156,167,178,189,201,203,221,
  	223,234,244,249,254,259,267,281,288,291,303,308,319,324,341,348,355,358,
  	364,369,372,377,381,396,413,421,426,431,448,453,457,463,469,472,474,484,
  	487,489,494,497,499,508,510,517,522,526,533,536,538,544,549,553,562,566,
  	572,580
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


size_t fsParser::TernaryExprContext::getRuleIndex() const {
  return fsParser::RuleTernaryExpr;
}

void fsParser::TernaryExprContext::copyFrom(TernaryExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TernaryContext ------------------------------------------------------------------

fsParser::BinaryExprContext* fsParser::TernaryContext::binaryExpr() {
  return getRuleContext<fsParser::BinaryExprContext>(0);
}

tree::TerminalNode* fsParser::TernaryContext::IF() {
  return getToken(fsParser::IF, 0);
}

std::vector<fsParser::TernaryExprContext *> fsParser::TernaryContext::ternaryExpr() {
  return getRuleContexts<fsParser::TernaryExprContext>();
}

fsParser::TernaryExprContext* fsParser::TernaryContext::ternaryExpr(size_t i) {
  return getRuleContext<fsParser::TernaryExprContext>(i);
}

tree::TerminalNode* fsParser::TernaryContext::ELSE() {
  return getToken(fsParser::ELSE, 0);
}

fsParser::TernaryContext::TernaryContext(TernaryExprContext *ctx) { copyFrom(ctx); }


std::any fsParser::TernaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitTernary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BinaryContext ------------------------------------------------------------------

fsParser::BinaryExprContext* fsParser::BinaryContext::binaryExpr() {
  return getRuleContext<fsParser::BinaryExprContext>(0);
}

fsParser::BinaryContext::BinaryContext(TernaryExprContext *ctx) { copyFrom(ctx); }


std::any fsParser::BinaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitBinary(this);
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
      _localctx = _tracker.createInstance<fsParser::BinaryContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(113);
      binaryExpr();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<fsParser::TernaryContext>(_localctx);
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


size_t fsParser::Var_assignContext::getRuleIndex() const {
  return fsParser::RuleVar_assign;
}

void fsParser::Var_assignContext::copyFrom(Var_assignContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IdenVarAssignContext ------------------------------------------------------------------

tree::TerminalNode* fsParser::IdenVarAssignContext::IDEN() {
  return getToken(fsParser::IDEN, 0);
}

tree::TerminalNode* fsParser::IdenVarAssignContext::EQUALS_TO() {
  return getToken(fsParser::EQUALS_TO, 0);
}

fsParser::TernaryExprContext* fsParser::IdenVarAssignContext::ternaryExpr() {
  return getRuleContext<fsParser::TernaryExprContext>(0);
}

fsParser::IdenVarAssignContext::IdenVarAssignContext(Var_assignContext *ctx) { copyFrom(ctx); }


std::any fsParser::IdenVarAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitIdenVarAssign(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ThisVarAssignContext ------------------------------------------------------------------

fsParser::Class_thisExprContext* fsParser::ThisVarAssignContext::class_thisExpr() {
  return getRuleContext<fsParser::Class_thisExprContext>(0);
}

tree::TerminalNode* fsParser::ThisVarAssignContext::EQUALS_TO() {
  return getToken(fsParser::EQUALS_TO, 0);
}

fsParser::TernaryExprContext* fsParser::ThisVarAssignContext::ternaryExpr() {
  return getRuleContext<fsParser::TernaryExprContext>(0);
}

fsParser::ThisVarAssignContext::ThisVarAssignContext(Var_assignContext *ctx) { copyFrom(ctx); }


std::any fsParser::ThisVarAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitThisVarAssign(this);
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
    setState(135);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case fsParser::IDEN: {
        _localctx = _tracker.createInstance<fsParser::IdenVarAssignContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(128);
        match(fsParser::IDEN);
        setState(129);
        match(fsParser::EQUALS_TO);
        setState(130);
        ternaryExpr();
        break;
      }

      case fsParser::THIS: {
        _localctx = _tracker.createInstance<fsParser::ThisVarAssignContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(131);
        class_thisExpr();
        setState(132);
        match(fsParser::EQUALS_TO);
        setState(133);
        ternaryExpr();
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

//----------------- Or_opContext ------------------------------------------------------------------

fsParser::Or_opContext::Or_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t fsParser::Or_opContext::getRuleIndex() const {
  return fsParser::RuleOr_op;
}

void fsParser::Or_opContext::copyFrom(Or_opContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IsNotContext ------------------------------------------------------------------

fsParser::Is_not_opContext* fsParser::IsNotContext::is_not_op() {
  return getRuleContext<fsParser::Is_not_opContext>(0);
}

fsParser::IsNotContext::IsNotContext(Or_opContext *ctx) { copyFrom(ctx); }


std::any fsParser::IsNotContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitIsNot(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OrIsNotContext ------------------------------------------------------------------

fsParser::Or_opContext* fsParser::OrIsNotContext::or_op() {
  return getRuleContext<fsParser::Or_opContext>(0);
}

tree::TerminalNode* fsParser::OrIsNotContext::OR() {
  return getToken(fsParser::OR, 0);
}

fsParser::Is_not_opContext* fsParser::OrIsNotContext::is_not_op() {
  return getRuleContext<fsParser::Is_not_opContext>(0);
}

fsParser::OrIsNotContext::OrIsNotContext(Or_opContext *ctx) { copyFrom(ctx); }


std::any fsParser::OrIsNotContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitOrIsNot(this);
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
    _localctx = _tracker.createInstance<IsNotContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(138);
    is_not_op(0);
    _ctx->stop = _input->LT(-1);
    setState(145);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<OrIsNotContext>(_tracker.createInstance<Or_opContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleOr_op);
        setState(140);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(141);
        match(fsParser::OR);
        setState(142);
        is_not_op(0); 
      }
      setState(147);
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


size_t fsParser::Is_not_opContext::getRuleIndex() const {
  return fsParser::RuleIs_not_op;
}

void fsParser::Is_not_opContext::copyFrom(Is_not_opContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IsntContext ------------------------------------------------------------------

fsParser::Isnt_opContext* fsParser::IsntContext::isnt_op() {
  return getRuleContext<fsParser::Isnt_opContext>(0);
}

fsParser::IsntContext::IsntContext(Is_not_opContext *ctx) { copyFrom(ctx); }


std::any fsParser::IsntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitIsnt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IsNot_IsNtContext ------------------------------------------------------------------

fsParser::Is_not_opContext* fsParser::IsNot_IsNtContext::is_not_op() {
  return getRuleContext<fsParser::Is_not_opContext>(0);
}

fsParser::Isnt_opContext* fsParser::IsNot_IsNtContext::isnt_op() {
  return getRuleContext<fsParser::Isnt_opContext>(0);
}

tree::TerminalNode* fsParser::IsNot_IsNtContext::IS() {
  return getToken(fsParser::IS, 0);
}

tree::TerminalNode* fsParser::IsNot_IsNtContext::NOT() {
  return getToken(fsParser::NOT, 0);
}

fsParser::IsNot_IsNtContext::IsNot_IsNtContext(Is_not_opContext *ctx) { copyFrom(ctx); }


std::any fsParser::IsNot_IsNtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitIsNot_IsNt(this);
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
    _localctx = _tracker.createInstance<IsntContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(149);
    isnt_op(0);
    _ctx->stop = _input->LT(-1);
    setState(156);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<IsNot_IsNtContext>(_tracker.createInstance<Is_not_opContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleIs_not_op);
        setState(151);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(152);
        _la = _input->LA(1);
        if (!(_la == fsParser::IS

        || _la == fsParser::NOT)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(153);
        isnt_op(0); 
      }
      setState(158);
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


size_t fsParser::Isnt_opContext::getRuleIndex() const {
  return fsParser::RuleIsnt_op;
}

void fsParser::Isnt_opContext::copyFrom(Isnt_opContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AndContext ------------------------------------------------------------------

fsParser::And_opContext* fsParser::AndContext::and_op() {
  return getRuleContext<fsParser::And_opContext>(0);
}

fsParser::AndContext::AndContext(Isnt_opContext *ctx) { copyFrom(ctx); }


std::any fsParser::AndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitAnd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Isnt_AndContext ------------------------------------------------------------------

fsParser::Isnt_opContext* fsParser::Isnt_AndContext::isnt_op() {
  return getRuleContext<fsParser::Isnt_opContext>(0);
}

tree::TerminalNode* fsParser::Isnt_AndContext::ISNT() {
  return getToken(fsParser::ISNT, 0);
}

fsParser::And_opContext* fsParser::Isnt_AndContext::and_op() {
  return getRuleContext<fsParser::And_opContext>(0);
}

fsParser::Isnt_AndContext::Isnt_AndContext(Isnt_opContext *ctx) { copyFrom(ctx); }


std::any fsParser::Isnt_AndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitIsnt_And(this);
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
    _localctx = _tracker.createInstance<AndContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(160);
    and_op(0);
    _ctx->stop = _input->LT(-1);
    setState(167);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<Isnt_AndContext>(_tracker.createInstance<Isnt_opContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleIsnt_op);
        setState(162);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(163);
        match(fsParser::ISNT);
        setState(164);
        and_op(0); 
      }
      setState(169);
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


size_t fsParser::And_opContext::getRuleIndex() const {
  return fsParser::RuleAnd_op;
}

void fsParser::And_opContext::copyFrom(And_opContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- And_GtContext ------------------------------------------------------------------

fsParser::And_opContext* fsParser::And_GtContext::and_op() {
  return getRuleContext<fsParser::And_opContext>(0);
}

tree::TerminalNode* fsParser::And_GtContext::AND() {
  return getToken(fsParser::AND, 0);
}

fsParser::Gt_opContext* fsParser::And_GtContext::gt_op() {
  return getRuleContext<fsParser::Gt_opContext>(0);
}

fsParser::And_GtContext::And_GtContext(And_opContext *ctx) { copyFrom(ctx); }


std::any fsParser::And_GtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitAnd_Gt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- GtContext ------------------------------------------------------------------

fsParser::Gt_opContext* fsParser::GtContext::gt_op() {
  return getRuleContext<fsParser::Gt_opContext>(0);
}

fsParser::GtContext::GtContext(And_opContext *ctx) { copyFrom(ctx); }


std::any fsParser::GtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitGt(this);
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
    _localctx = _tracker.createInstance<GtContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(171);
    gt_op(0);
    _ctx->stop = _input->LT(-1);
    setState(178);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<And_GtContext>(_tracker.createInstance<And_opContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleAnd_op);
        setState(173);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(174);
        match(fsParser::AND);
        setState(175);
        gt_op(0); 
      }
      setState(180);
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


size_t fsParser::Gt_opContext::getRuleIndex() const {
  return fsParser::RuleGt_op;
}

void fsParser::Gt_opContext::copyFrom(Gt_opContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AddContext ------------------------------------------------------------------

fsParser::Add_opContext* fsParser::AddContext::add_op() {
  return getRuleContext<fsParser::Add_opContext>(0);
}

fsParser::AddContext::AddContext(Gt_opContext *ctx) { copyFrom(ctx); }


std::any fsParser::AddContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitAdd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Gt_AddContext ------------------------------------------------------------------

fsParser::Gt_opContext* fsParser::Gt_AddContext::gt_op() {
  return getRuleContext<fsParser::Gt_opContext>(0);
}

fsParser::Add_opContext* fsParser::Gt_AddContext::add_op() {
  return getRuleContext<fsParser::Add_opContext>(0);
}

tree::TerminalNode* fsParser::Gt_AddContext::GT() {
  return getToken(fsParser::GT, 0);
}

tree::TerminalNode* fsParser::Gt_AddContext::GTE() {
  return getToken(fsParser::GTE, 0);
}

tree::TerminalNode* fsParser::Gt_AddContext::LT() {
  return getToken(fsParser::LT, 0);
}

tree::TerminalNode* fsParser::Gt_AddContext::LTE() {
  return getToken(fsParser::LTE, 0);
}

fsParser::Gt_AddContext::Gt_AddContext(Gt_opContext *ctx) { copyFrom(ctx); }


std::any fsParser::Gt_AddContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitGt_Add(this);
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
    _localctx = _tracker.createInstance<AddContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(182);
    add_op(0);
    _ctx->stop = _input->LT(-1);
    setState(189);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<Gt_AddContext>(_tracker.createInstance<Gt_opContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleGt_op);
        setState(184);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(185);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 263882790666240) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(186);
        add_op(0); 
      }
      setState(191);
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


size_t fsParser::Add_opContext::getRuleIndex() const {
  return fsParser::RuleAdd_op;
}

void fsParser::Add_opContext::copyFrom(Add_opContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Add_MulContext ------------------------------------------------------------------

fsParser::Add_opContext* fsParser::Add_MulContext::add_op() {
  return getRuleContext<fsParser::Add_opContext>(0);
}

tree::TerminalNode* fsParser::Add_MulContext::PLUS() {
  return getToken(fsParser::PLUS, 0);
}

fsParser::Mul_opContext* fsParser::Add_MulContext::mul_op() {
  return getRuleContext<fsParser::Mul_opContext>(0);
}

fsParser::Add_MulContext::Add_MulContext(Add_opContext *ctx) { copyFrom(ctx); }


std::any fsParser::Add_MulContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitAdd_Mul(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulContext ------------------------------------------------------------------

fsParser::Mul_opContext* fsParser::MulContext::mul_op() {
  return getRuleContext<fsParser::Mul_opContext>(0);
}

fsParser::MulContext::MulContext(Add_opContext *ctx) { copyFrom(ctx); }


std::any fsParser::MulContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitMul(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Sub_MulContext ------------------------------------------------------------------

fsParser::Add_opContext* fsParser::Sub_MulContext::add_op() {
  return getRuleContext<fsParser::Add_opContext>(0);
}

tree::TerminalNode* fsParser::Sub_MulContext::MINUS() {
  return getToken(fsParser::MINUS, 0);
}

fsParser::Mul_opContext* fsParser::Sub_MulContext::mul_op() {
  return getRuleContext<fsParser::Mul_opContext>(0);
}

fsParser::Sub_MulContext::Sub_MulContext(Add_opContext *ctx) { copyFrom(ctx); }


std::any fsParser::Sub_MulContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitSub_Mul(this);
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
    _localctx = _tracker.createInstance<MulContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(193);
    mul_op(0);
    _ctx->stop = _input->LT(-1);
    setState(203);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(201);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<Add_MulContext>(_tracker.createInstance<Add_opContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleAdd_op);
          setState(195);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(196);
          match(fsParser::PLUS);
          setState(197);
          mul_op(0);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<Sub_MulContext>(_tracker.createInstance<Add_opContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleAdd_op);
          setState(198);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(199);
          match(fsParser::MINUS);
          setState(200);
          mul_op(0);
          break;
        }

        default:
          break;
        } 
      }
      setState(205);
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


size_t fsParser::Mul_opContext::getRuleIndex() const {
  return fsParser::RuleMul_op;
}

void fsParser::Mul_opContext::copyFrom(Mul_opContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Div_ExpContext ------------------------------------------------------------------

fsParser::Mul_opContext* fsParser::Div_ExpContext::mul_op() {
  return getRuleContext<fsParser::Mul_opContext>(0);
}

tree::TerminalNode* fsParser::Div_ExpContext::SLASH() {
  return getToken(fsParser::SLASH, 0);
}

fsParser::Exponent_opContext* fsParser::Div_ExpContext::exponent_op() {
  return getRuleContext<fsParser::Exponent_opContext>(0);
}

fsParser::Div_ExpContext::Div_ExpContext(Mul_opContext *ctx) { copyFrom(ctx); }


std::any fsParser::Div_ExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitDiv_Exp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExponentContext ------------------------------------------------------------------

fsParser::Exponent_opContext* fsParser::ExponentContext::exponent_op() {
  return getRuleContext<fsParser::Exponent_opContext>(0);
}

fsParser::ExponentContext::ExponentContext(Mul_opContext *ctx) { copyFrom(ctx); }


std::any fsParser::ExponentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitExponent(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Mul_ExpContext ------------------------------------------------------------------

fsParser::Mul_opContext* fsParser::Mul_ExpContext::mul_op() {
  return getRuleContext<fsParser::Mul_opContext>(0);
}

tree::TerminalNode* fsParser::Mul_ExpContext::STAR() {
  return getToken(fsParser::STAR, 0);
}

fsParser::Exponent_opContext* fsParser::Mul_ExpContext::exponent_op() {
  return getRuleContext<fsParser::Exponent_opContext>(0);
}

fsParser::Mul_ExpContext::Mul_ExpContext(Mul_opContext *ctx) { copyFrom(ctx); }


std::any fsParser::Mul_ExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitMul_Exp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Percent_ExpContext ------------------------------------------------------------------

fsParser::Mul_opContext* fsParser::Percent_ExpContext::mul_op() {
  return getRuleContext<fsParser::Mul_opContext>(0);
}

tree::TerminalNode* fsParser::Percent_ExpContext::PERCENT() {
  return getToken(fsParser::PERCENT, 0);
}

fsParser::Exponent_opContext* fsParser::Percent_ExpContext::exponent_op() {
  return getRuleContext<fsParser::Exponent_opContext>(0);
}

fsParser::Percent_ExpContext::Percent_ExpContext(Mul_opContext *ctx) { copyFrom(ctx); }


std::any fsParser::Percent_ExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitPercent_Exp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Floor_ExpContext ------------------------------------------------------------------

fsParser::Mul_opContext* fsParser::Floor_ExpContext::mul_op() {
  return getRuleContext<fsParser::Mul_opContext>(0);
}

tree::TerminalNode* fsParser::Floor_ExpContext::FLOOR() {
  return getToken(fsParser::FLOOR, 0);
}

fsParser::Exponent_opContext* fsParser::Floor_ExpContext::exponent_op() {
  return getRuleContext<fsParser::Exponent_opContext>(0);
}

fsParser::Floor_ExpContext::Floor_ExpContext(Mul_opContext *ctx) { copyFrom(ctx); }


std::any fsParser::Floor_ExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitFloor_Exp(this);
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
    _localctx = _tracker.createInstance<ExponentContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(207);
    exponent_op(0);
    _ctx->stop = _input->LT(-1);
    setState(223);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(221);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<Mul_ExpContext>(_tracker.createInstance<Mul_opContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleMul_op);
          setState(209);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(210);
          match(fsParser::STAR);
          setState(211);
          exponent_op(0);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<Div_ExpContext>(_tracker.createInstance<Mul_opContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleMul_op);
          setState(212);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(213);
          match(fsParser::SLASH);
          setState(214);
          exponent_op(0);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<Floor_ExpContext>(_tracker.createInstance<Mul_opContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleMul_op);
          setState(215);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(216);
          match(fsParser::FLOOR);
          setState(217);
          exponent_op(0);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<Percent_ExpContext>(_tracker.createInstance<Mul_opContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleMul_op);
          setState(218);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(219);
          match(fsParser::PERCENT);
          setState(220);
          exponent_op(0);
          break;
        }

        default:
          break;
        } 
      }
      setState(225);
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


size_t fsParser::Exponent_opContext::getRuleIndex() const {
  return fsParser::RuleExponent_op;
}

void fsParser::Exponent_opContext::copyFrom(Exponent_opContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Exponent_UnaryContext ------------------------------------------------------------------

fsParser::Exponent_opContext* fsParser::Exponent_UnaryContext::exponent_op() {
  return getRuleContext<fsParser::Exponent_opContext>(0);
}

tree::TerminalNode* fsParser::Exponent_UnaryContext::POWER() {
  return getToken(fsParser::POWER, 0);
}

fsParser::UnaryExprContext* fsParser::Exponent_UnaryContext::unaryExpr() {
  return getRuleContext<fsParser::UnaryExprContext>(0);
}

fsParser::Exponent_UnaryContext::Exponent_UnaryContext(Exponent_opContext *ctx) { copyFrom(ctx); }


std::any fsParser::Exponent_UnaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitExponent_Unary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryContext ------------------------------------------------------------------

fsParser::UnaryExprContext* fsParser::UnaryContext::unaryExpr() {
  return getRuleContext<fsParser::UnaryExprContext>(0);
}

fsParser::UnaryContext::UnaryContext(Exponent_opContext *ctx) { copyFrom(ctx); }


std::any fsParser::UnaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitUnary(this);
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
    _localctx = _tracker.createInstance<UnaryContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(227);
    unaryExpr();
    _ctx->stop = _input->LT(-1);
    setState(234);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<Exponent_UnaryContext>(_tracker.createInstance<Exponent_opContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleExponent_op);
        setState(229);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(230);
        match(fsParser::POWER);
        setState(231);
        unaryExpr(); 
      }
      setState(236);
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


size_t fsParser::UnaryExprContext::getRuleIndex() const {
  return fsParser::RuleUnaryExpr;
}

void fsParser::UnaryExprContext::copyFrom(UnaryExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- NegitificationContext ------------------------------------------------------------------

fsParser::UnaryExprContext* fsParser::NegitificationContext::unaryExpr() {
  return getRuleContext<fsParser::UnaryExprContext>(0);
}

fsParser::BinaryExprContext* fsParser::NegitificationContext::binaryExpr() {
  return getRuleContext<fsParser::BinaryExprContext>(0);
}

fsParser::TernaryExprContext* fsParser::NegitificationContext::ternaryExpr() {
  return getRuleContext<fsParser::TernaryExprContext>(0);
}

std::vector<tree::TerminalNode *> fsParser::NegitificationContext::MINUS() {
  return getTokens(fsParser::MINUS);
}

tree::TerminalNode* fsParser::NegitificationContext::MINUS(size_t i) {
  return getToken(fsParser::MINUS, i);
}

fsParser::NegitificationContext::NegitificationContext(UnaryExprContext *ctx) { copyFrom(ctx); }


std::any fsParser::NegitificationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitNegitification(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VarDeclContext ------------------------------------------------------------------

fsParser::Var_declContext* fsParser::VarDeclContext::var_decl() {
  return getRuleContext<fsParser::Var_declContext>(0);
}

fsParser::VarDeclContext::VarDeclContext(UnaryExprContext *ctx) { copyFrom(ctx); }


std::any fsParser::VarDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitVarDecl(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Pointer_AccessContext ------------------------------------------------------------------

fsParser::TernaryExprContext* fsParser::Pointer_AccessContext::ternaryExpr() {
  return getRuleContext<fsParser::TernaryExprContext>(0);
}

tree::TerminalNode* fsParser::Pointer_AccessContext::STAR() {
  return getToken(fsParser::STAR, 0);
}

fsParser::Pointer_AccessContext::Pointer_AccessContext(UnaryExprContext *ctx) { copyFrom(ctx); }


std::any fsParser::Pointer_AccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitPointer_Access(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ClassObjInitContext ------------------------------------------------------------------

fsParser::Class_object_initContext* fsParser::ClassObjInitContext::class_object_init() {
  return getRuleContext<fsParser::Class_object_initContext>(0);
}

fsParser::ClassObjInitContext::ClassObjInitContext(UnaryExprContext *ctx) { copyFrom(ctx); }


std::any fsParser::ClassObjInitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitClassObjInit(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PositficationContext ------------------------------------------------------------------

fsParser::UnaryExprContext* fsParser::PositficationContext::unaryExpr() {
  return getRuleContext<fsParser::UnaryExprContext>(0);
}

fsParser::BinaryExprContext* fsParser::PositficationContext::binaryExpr() {
  return getRuleContext<fsParser::BinaryExprContext>(0);
}

fsParser::TernaryExprContext* fsParser::PositficationContext::ternaryExpr() {
  return getRuleContext<fsParser::TernaryExprContext>(0);
}

std::vector<tree::TerminalNode *> fsParser::PositficationContext::PLUS() {
  return getTokens(fsParser::PLUS);
}

tree::TerminalNode* fsParser::PositficationContext::PLUS(size_t i) {
  return getToken(fsParser::PLUS, i);
}

fsParser::PositficationContext::PositficationContext(UnaryExprContext *ctx) { copyFrom(ctx); }


std::any fsParser::PositficationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitPositfication(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Unary_ObjectContext ------------------------------------------------------------------

fsParser::ObjectContext* fsParser::Unary_ObjectContext::object() {
  return getRuleContext<fsParser::ObjectContext>(0);
}

fsParser::Unary_ObjectContext::Unary_ObjectContext(UnaryExprContext *ctx) { copyFrom(ctx); }


std::any fsParser::Unary_ObjectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitUnary_Object(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Func_CallContext ------------------------------------------------------------------

fsParser::Func_callContext* fsParser::Func_CallContext::func_call() {
  return getRuleContext<fsParser::Func_callContext>(0);
}

fsParser::Func_CallContext::Func_CallContext(UnaryExprContext *ctx) { copyFrom(ctx); }


std::any fsParser::Func_CallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitFunc_Call(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenthesisedContext ------------------------------------------------------------------

tree::TerminalNode* fsParser::ParenthesisedContext::LOPAREN() {
  return getToken(fsParser::LOPAREN, 0);
}

fsParser::TernaryExprContext* fsParser::ParenthesisedContext::ternaryExpr() {
  return getRuleContext<fsParser::TernaryExprContext>(0);
}

tree::TerminalNode* fsParser::ParenthesisedContext::ROPAREN() {
  return getToken(fsParser::ROPAREN, 0);
}

fsParser::ParenthesisedContext::ParenthesisedContext(UnaryExprContext *ctx) { copyFrom(ctx); }


std::any fsParser::ParenthesisedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitParenthesised(this);
  else
    return visitor->visitChildren(this);
}
fsParser::UnaryExprContext* fsParser::unaryExpr() {
  UnaryExprContext *_localctx = _tracker.createInstance<UnaryExprContext>(_ctx, getState());
  enterRule(_localctx, 26, fsParser::RuleUnaryExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(267);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<fsParser::Unary_ObjectContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(237);
      object();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<fsParser::Func_CallContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(238);
      func_call();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<fsParser::VarDeclContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(239);
      var_decl();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<fsParser::ClassObjInitContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(240);
      class_object_init();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<fsParser::PositficationContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(242); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(241);
                match(fsParser::PLUS);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(244); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      setState(249);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
      case 1: {
        setState(246);
        unaryExpr();
        break;
      }

      case 2: {
        setState(247);
        binaryExpr();
        break;
      }

      case 3: {
        setState(248);
        ternaryExpr();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<fsParser::NegitificationContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(252); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(251);
                match(fsParser::MINUS);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(254); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      setState(259);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
      case 1: {
        setState(256);
        unaryExpr();
        break;
      }

      case 2: {
        setState(257);
        binaryExpr();
        break;
      }

      case 3: {
        setState(258);
        ternaryExpr();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<fsParser::Pointer_AccessContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(261);
      match(fsParser::STAR);
      setState(262);
      ternaryExpr();
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<fsParser::ParenthesisedContext>(_localctx);
      enterOuterAlt(_localctx, 8);
      setState(263);
      match(fsParser::LOPAREN);
      setState(264);
      ternaryExpr();
      setState(265);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(281);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(269);
      object();
      setState(270);
      match(fsParser::LOPAREN);
      setState(271);
      match(fsParser::ROPAREN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(273);
      object();
      setState(274);
      match(fsParser::LOPAREN);
      setState(275);
      params();
      setState(276);
      match(fsParser::ROPAREN);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(278);
      object();
      setState(279);
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


size_t fsParser::ParamsContext::getRuleIndex() const {
  return fsParser::RuleParams;
}

void fsParser::ParamsContext::copyFrom(ParamsContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- MultiParamsContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> fsParser::MultiParamsContext::COMMA() {
  return getTokens(fsParser::COMMA);
}

tree::TerminalNode* fsParser::MultiParamsContext::COMMA(size_t i) {
  return getToken(fsParser::COMMA, i);
}

std::vector<fsParser::ParamContext *> fsParser::MultiParamsContext::param() {
  return getRuleContexts<fsParser::ParamContext>();
}

fsParser::ParamContext* fsParser::MultiParamsContext::param(size_t i) {
  return getRuleContext<fsParser::ParamContext>(i);
}

fsParser::MultiParamsContext::MultiParamsContext(ParamsContext *ctx) { copyFrom(ctx); }


std::any fsParser::MultiParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitMultiParams(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UniParamsContext ------------------------------------------------------------------

fsParser::ParamContext* fsParser::UniParamsContext::param() {
  return getRuleContext<fsParser::ParamContext>(0);
}

fsParser::UniParamsContext::UniParamsContext(ParamsContext *ctx) { copyFrom(ctx); }


std::any fsParser::UniParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fsVisitor*>(visitor))
    return parserVisitor->visitUniParams(this);
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
    setState(291);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<fsParser::UniParamsContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(283);
      param();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<fsParser::MultiParamsContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(288);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(284);
          match(fsParser::COMMA);
          setState(285);
          param(); 
        }
        setState(290);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
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
    setState(293);
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
    setState(295);
    match(fsParser::DECL);
    setState(296);
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
        container_items(); 
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
    setState(306);
    match(fsParser::LCPAREN);
    setState(308);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1973297222787102) != 0)) {
      setState(307);
      container_items();
    }
    setState(310);
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
    setState(312);
    match(fsParser::STRING);
    setState(313);
    match(fsParser::COLON);
    setState(314);
    ternaryExpr();
    setState(319);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(315);
        match(fsParser::COMMA);
        setState(316);
        map_pairs(); 
      }
      setState(321);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
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
    setState(322);
    match(fsParser::LPAREN);
    setState(324);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == fsParser::STRING) {
      setState(323);
      map_pairs();
    }
    setState(326);
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
    setState(341);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case fsParser::BREAK: {
        enterOuterAlt(_localctx, 1);
        setState(328);
        match(fsParser::BREAK);
        break;
      }

      case fsParser::CONTINUE: {
        enterOuterAlt(_localctx, 2);
        setState(329);
        match(fsParser::CONTINUE);
        break;
      }

      case fsParser::IGNORE: {
        enterOuterAlt(_localctx, 3);
        setState(330);
        match(fsParser::IGNORE);
        break;
      }

      case fsParser::FUNC: {
        enterOuterAlt(_localctx, 4);
        setState(331);
        func_def();
        break;
      }

      case fsParser::CLASS: {
        enterOuterAlt(_localctx, 5);
        setState(332);
        class_create_stmt();
        break;
      }

      case fsParser::IF: {
        enterOuterAlt(_localctx, 6);
        setState(333);
        cond_stmt();
        break;
      }

      case fsParser::LOOP: {
        enterOuterAlt(_localctx, 7);
        setState(334);
        loop_stmt();
        break;
      }

      case fsParser::INCLUDE: {
        enterOuterAlt(_localctx, 8);
        setState(335);
        import_stmt();
        break;
      }

      case fsParser::MUT: {
        enterOuterAlt(_localctx, 9);
        setState(336);
        mut_stmt();
        break;
      }

      case fsParser::CONST: {
        enterOuterAlt(_localctx, 10);
        setState(337);
        const_stmt();
        break;
      }

      case fsParser::DELETE: {
        enterOuterAlt(_localctx, 11);
        setState(338);
        delete_stmt();
        break;
      }

      case fsParser::RETURN: {
        enterOuterAlt(_localctx, 12);
        setState(339);
        return_stmt();
        break;
      }

      case fsParser::DEFINE: {
        enterOuterAlt(_localctx, 13);
        setState(340);
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
    setState(343);
    match(fsParser::IDEN);
    setState(348);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(344);
        match(fsParser::COMMA);
        setState(345);
        def_params(); 
      }
      setState(350);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
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
    setState(351);
    match(fsParser::CLASS);
    setState(352);
    match(fsParser::IDEN);
    setState(355);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == fsParser::INHERITS) {
      setState(353);
      match(fsParser::INHERITS);
      setState(354);
      match(fsParser::IDEN);
    }
    setState(358);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 6442987552) != 0)) {
      setState(357);
      class_body();
    }
    setState(360);
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
    setState(364);
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
        setState(362);
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
        setState(363);
        stmt();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(367); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(366);
      match(fsParser::EOT);
      setState(369); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == fsParser::EOT);
    setState(372);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1973331791769374) != 0)) {
      setState(371);
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
    setState(374);
    match(fsParser::CONSTRUCTOR);
    setState(375);
    match(fsParser::LOPAREN);
    setState(377);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == fsParser::IDEN) {
      setState(376);
      def_params();
    }
    setState(379);
    match(fsParser::ROPAREN);
    setState(381);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1973331791769374) != 0)) {
      setState(380);
      constructor_body();
    }
    setState(383);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(396);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(385);
      match(fsParser::NEW);
      setState(386);
      object();
      setState(387);
      match(fsParser::LOPAREN);
      setState(388);
      match(fsParser::ROPAREN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(390);
      match(fsParser::NEW);
      setState(391);
      object();
      setState(392);
      match(fsParser::LOPAREN);
      setState(393);
      params();
      setState(394);
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
    setState(398);
    match(fsParser::THIS);
    setState(399);
    match(fsParser::DOT);
    setState(400);
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
    setState(402);
    match(fsParser::OVERRIDE);
    setState(403);
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
    setState(405);
    match(fsParser::OVERLOAD);
    setState(406);
    match(fsParser::LOPAREN);
    setState(407);
    func_def();
    setState(408);
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
    setState(410);
    match(fsParser::ABSTRACT);
    setState(413);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case fsParser::FUNC: {
        setState(411);
        func_def();
        break;
      }

      case fsParser::DECL: {
        setState(412);
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
    setState(421);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case fsParser::CONSTRUCTOR: {
        setState(415);
        class_constructor_init();
        break;
      }

      case fsParser::FUNC: {
        setState(416);
        func_def();
        break;
      }

      case fsParser::DECL: {
        setState(417);
        var_decl();
        break;
      }

      case fsParser::OVERRIDE: {
        setState(418);
        class_override_stmt();
        break;
      }

      case fsParser::OVERLOAD: {
        setState(419);
        class_overload_stmt();
        break;
      }

      case fsParser::ABSTRACT: {
        setState(420);
        class_abstract_stmt();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(431);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(424); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(423);
          match(fsParser::EOT);
          setState(426); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == fsParser::EOT);
        setState(428);
        class_body(); 
      }
      setState(433);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx);
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
    setState(434);
    match(fsParser::DELETE);
    setState(435);
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
    setState(437);
    match(fsParser::RETURN);
    setState(438);
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
    setState(440);
    match(fsParser::MUT);
    setState(441);
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
    setState(443);
    match(fsParser::CONST);
    setState(444);
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
    setState(455); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(448);
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
          setState(446);
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
          setState(447);
          stmt();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(451); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(450);
        match(fsParser::EOT);
        setState(453); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == fsParser::EOT);
      setState(457); 
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
    setState(459);
    match(fsParser::FUNC);
    setState(460);
    match(fsParser::IDEN);
    setState(461);
    match(fsParser::LOPAREN);
    setState(463);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == fsParser::IDEN) {
      setState(462);
      def_params();
    }
    setState(465);
    match(fsParser::ROPAREN);
    setState(474);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == fsParser::EOT) {
      setState(467); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(466);
        match(fsParser::EOT);
        setState(469); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == fsParser::EOT);
      setState(472);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 1973331791769374) != 0)) {
        setState(471);
        func_body();
      }
    }
    setState(476);
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
    setState(478);
    match(fsParser::IF);
    setState(479);
    expr();
    setState(480);
    match(fsParser::THEN);
    setState(489);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx)) {
    case 1: {
      setState(482); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(481);
                match(fsParser::EOT);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(484); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
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
    setState(499);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == fsParser::EOT) {
      setState(492); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(491);
        match(fsParser::EOT);
        setState(494); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == fsParser::EOT);
      setState(497);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fsParser::ELSE) {
        setState(496);
        sub_cond_stmt();
      }
    }
    setState(501);
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
    setState(510);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(503);
      else_if_stmt();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(504);
      match(fsParser::ELSE);
      setState(505);
      expr();
      setState(506);
      match(fsParser::THEN);
      setState(508);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 1973331791769374) != 0)) {
        setState(507);
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
    setState(524); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(512);
      match(fsParser::ELSE);
      setState(513);
      match(fsParser::IF);
      setState(514);
      expr();
      setState(515);
      match(fsParser::THEN);
      setState(517);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 1973331791769374) != 0)) {
        setState(516);
        flow_body();
      }
      setState(520); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(519);
        match(fsParser::EOT);
        setState(522); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == fsParser::EOT);
      setState(526); 
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
    setState(528);
    match(fsParser::LOOP);
    setState(529);
    match(fsParser::DO);
    setState(538);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == fsParser::EOT) {
      setState(531); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(530);
        match(fsParser::EOT);
        setState(533); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == fsParser::EOT);
      setState(536);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 1973331791769374) != 0)) {
        setState(535);
        flow_body();
      }
    }
    setState(540);
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
    setState(551); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(544);
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
          setState(542);
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
          setState(543);
          expr();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(547); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(546);
                match(fsParser::EOT);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(549); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      setState(553); 
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
    setState(555);
    match(fsParser::INCLUDE);
    setState(556);
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
    setState(558);
    match(fsParser::DEFINE);
    setState(559);
    match(fsParser::IDEN);
    setState(562);
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
        setState(560);
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
        setState(561);
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
    setState(566);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case fsParser::NEW: {
        setState(564);
        class_object_init();
        break;
      }

      case fsParser::IDEN: {
        setState(565);
        match(fsParser::IDEN);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(570); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(568);
              match(fsParser::DOT);
              setState(569);
              ternaryExpr();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(572); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx);
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
    setState(574);
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
    setState(580);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case fsParser::STRING:
      case fsParser::NUMBER:
      case fsParser::BOOL:
      case fsParser::NIL: {
        enterOuterAlt(_localctx, 1);
        setState(576);
        typeobject();
        break;
      }

      case fsParser::LCPAREN: {
        enterOuterAlt(_localctx, 2);
        setState(577);
        container();
        break;
      }

      case fsParser::LPAREN: {
        enterOuterAlt(_localctx, 3);
        setState(578);
        map();
        break;
      }

      case fsParser::IDEN: {
        enterOuterAlt(_localctx, 4);
        setState(579);
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
