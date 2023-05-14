
// Generated from fusion.g4 by ANTLR 4.12.0


#include "fusionLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct FusionLexerStaticData final {
  FusionLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  FusionLexerStaticData(const FusionLexerStaticData&) = delete;
  FusionLexerStaticData(FusionLexerStaticData&&) = delete;
  FusionLexerStaticData& operator=(const FusionLexerStaticData&) = delete;
  FusionLexerStaticData& operator=(FusionLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag fusionlexerLexerOnceFlag;
FusionLexerStaticData *fusionlexerLexerStaticData = nullptr;

void fusionlexerLexerInitialize() {
  assert(fusionlexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<FusionLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "IDENTIFIER", "NEW", "LOBRACE", "ROBRACE", "STRING", 
      "ESC_SEQ"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'.'", "','", "", "'new'", "'('", "')'"
    },
    std::vector<std::string>{
      "", "", "", "IDENTIFIER", "NEW", "LOBRACE", "ROBRACE", "STRING", "ESC_SEQ"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,8,58,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,
  	2,7,7,7,1,0,1,0,1,1,1,1,1,2,1,2,4,2,24,8,2,11,2,12,2,25,1,3,1,3,1,3,1,
  	3,1,4,1,4,1,5,1,5,1,6,1,6,1,6,5,6,39,8,6,10,6,12,6,42,9,6,1,6,1,6,1,6,
  	1,6,5,6,48,8,6,10,6,12,6,51,9,6,1,6,3,6,54,8,6,1,7,1,7,1,7,0,0,8,1,1,
  	3,2,5,3,7,4,9,5,11,6,13,7,15,8,1,0,5,3,0,65,90,95,95,97,122,4,0,48,57,
  	65,90,95,95,97,122,2,0,39,39,92,92,2,0,34,34,92,92,6,0,34,34,39,39,92,
  	92,110,110,114,114,116,116,63,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,
  	1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,1,17,1,0,0,
  	0,3,19,1,0,0,0,5,21,1,0,0,0,7,27,1,0,0,0,9,31,1,0,0,0,11,33,1,0,0,0,13,
  	53,1,0,0,0,15,55,1,0,0,0,17,18,5,46,0,0,18,2,1,0,0,0,19,20,5,44,0,0,20,
  	4,1,0,0,0,21,23,7,0,0,0,22,24,7,1,0,0,23,22,1,0,0,0,24,25,1,0,0,0,25,
  	23,1,0,0,0,25,26,1,0,0,0,26,6,1,0,0,0,27,28,5,110,0,0,28,29,5,101,0,0,
  	29,30,5,119,0,0,30,8,1,0,0,0,31,32,5,40,0,0,32,10,1,0,0,0,33,34,5,41,
  	0,0,34,12,1,0,0,0,35,40,5,39,0,0,36,39,3,15,7,0,37,39,8,2,0,0,38,36,1,
  	0,0,0,38,37,1,0,0,0,39,42,1,0,0,0,40,38,1,0,0,0,40,41,1,0,0,0,41,43,1,
  	0,0,0,42,40,1,0,0,0,43,54,5,39,0,0,44,49,5,34,0,0,45,48,3,15,7,0,46,48,
  	8,3,0,0,47,45,1,0,0,0,47,46,1,0,0,0,48,51,1,0,0,0,49,47,1,0,0,0,49,50,
  	1,0,0,0,50,52,1,0,0,0,51,49,1,0,0,0,52,54,5,34,0,0,53,35,1,0,0,0,53,44,
  	1,0,0,0,54,14,1,0,0,0,55,56,5,92,0,0,56,57,7,4,0,0,57,16,1,0,0,0,7,0,
  	25,38,40,47,49,53,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  fusionlexerLexerStaticData = staticData.release();
}

}

fusionLexer::fusionLexer(CharStream *input) : Lexer(input) {
  fusionLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *fusionlexerLexerStaticData->atn, fusionlexerLexerStaticData->decisionToDFA, fusionlexerLexerStaticData->sharedContextCache);
}

fusionLexer::~fusionLexer() {
  delete _interpreter;
}

std::string fusionLexer::getGrammarFileName() const {
  return "fusion.g4";
}

const std::vector<std::string>& fusionLexer::getRuleNames() const {
  return fusionlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& fusionLexer::getChannelNames() const {
  return fusionlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& fusionLexer::getModeNames() const {
  return fusionlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& fusionLexer::getVocabulary() const {
  return fusionlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView fusionLexer::getSerializedATN() const {
  return fusionlexerLexerStaticData->serializedATN;
}

const atn::ATN& fusionLexer::getATN() const {
  return *fusionlexerLexerStaticData->atn;
}




void fusionLexer::initialize() {
  ::antlr4::internal::call_once(fusionlexerLexerOnceFlag, fusionlexerLexerInitialize);
}
