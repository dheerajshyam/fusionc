
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
      "T__0", "IDENTIFIER", "LOBRACE", "ROBRACE", "STRING", "ESC_SEQ"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "','", "", "'('", "')'"
    },
    std::vector<std::string>{
      "", "", "IDENTIFIER", "LOBRACE", "ROBRACE", "STRING", "ESC_SEQ"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,6,48,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,1,0,1,0,
  	1,1,1,1,4,1,18,8,1,11,1,12,1,19,1,2,1,2,1,3,1,3,1,4,1,4,1,4,5,4,29,8,
  	4,10,4,12,4,32,9,4,1,4,1,4,1,4,1,4,5,4,38,8,4,10,4,12,4,41,9,4,1,4,3,
  	4,44,8,4,1,5,1,5,1,5,0,0,6,1,1,3,2,5,3,7,4,9,5,11,6,1,0,5,3,0,65,90,95,
  	95,97,122,4,0,48,57,65,90,95,95,97,122,2,0,39,39,92,92,2,0,34,34,92,92,
  	6,0,34,34,39,39,92,92,110,110,114,114,116,116,53,0,1,1,0,0,0,0,3,1,0,
  	0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,1,13,1,0,0,0,3,15,
  	1,0,0,0,5,21,1,0,0,0,7,23,1,0,0,0,9,43,1,0,0,0,11,45,1,0,0,0,13,14,5,
  	44,0,0,14,2,1,0,0,0,15,17,7,0,0,0,16,18,7,1,0,0,17,16,1,0,0,0,18,19,1,
  	0,0,0,19,17,1,0,0,0,19,20,1,0,0,0,20,4,1,0,0,0,21,22,5,40,0,0,22,6,1,
  	0,0,0,23,24,5,41,0,0,24,8,1,0,0,0,25,30,5,39,0,0,26,29,3,11,5,0,27,29,
  	8,2,0,0,28,26,1,0,0,0,28,27,1,0,0,0,29,32,1,0,0,0,30,28,1,0,0,0,30,31,
  	1,0,0,0,31,33,1,0,0,0,32,30,1,0,0,0,33,44,5,39,0,0,34,39,5,34,0,0,35,
  	38,3,11,5,0,36,38,8,3,0,0,37,35,1,0,0,0,37,36,1,0,0,0,38,41,1,0,0,0,39,
  	37,1,0,0,0,39,40,1,0,0,0,40,42,1,0,0,0,41,39,1,0,0,0,42,44,5,34,0,0,43,
  	25,1,0,0,0,43,34,1,0,0,0,44,10,1,0,0,0,45,46,5,92,0,0,46,47,7,4,0,0,47,
  	12,1,0,0,0,7,0,19,28,30,37,39,43,0
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
