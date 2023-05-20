
// Generated from fusion.g4 by ANTLR 4.12.0


#include "fusionListener.h"
#include "fusionVisitor.h"

#include "fusionParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct FusionParserStaticData final {
  FusionParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  FusionParserStaticData(const FusionParserStaticData&) = delete;
  FusionParserStaticData(FusionParserStaticData&&) = delete;
  FusionParserStaticData& operator=(const FusionParserStaticData&) = delete;
  FusionParserStaticData& operator=(FusionParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag fusionParserOnceFlag;
FusionParserStaticData *fusionParserStaticData = nullptr;

void fusionParserInitialize() {
  assert(fusionParserStaticData == nullptr);
  auto staticData = std::make_unique<FusionParserStaticData>(
    std::vector<std::string>{
      "start", "stmt", "var_decl", "var_type", "var_value", "expr", "class_ops", 
      "class_member_call", "class_object_creation", "class_hierarchy", "func_call", 
      "params", "param", "typeobjects", "typeobject"
    },
    std::vector<std::string>{
      "", "'='", "':'", "'.'", "'new'", "'('", "')'", "'::'", "','"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "IDENTIFIER", "STR", "INT", "ESC_SEQ", 
      "WHITESPACE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,13,133,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,1,0,1,0,4,0,33,8,0,11,0,12,0,34,3,0,37,8,0,1,0,1,0,1,1,1,1,1,2,1,2,
  	1,2,1,2,1,2,1,2,1,2,4,2,50,8,2,11,2,12,2,51,3,2,54,8,2,1,2,1,2,1,3,1,
  	3,1,3,1,4,1,4,3,4,63,8,4,1,5,1,5,1,5,3,5,68,8,5,1,6,1,6,3,6,72,8,6,1,
  	7,1,7,3,7,76,8,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,3,8,85,8,8,1,8,1,8,1,9,1,
  	9,1,9,4,9,92,8,9,11,9,12,9,93,3,9,96,8,9,1,10,1,10,1,10,3,10,101,8,10,
  	1,10,1,10,1,10,3,10,106,8,10,3,10,108,8,10,1,11,1,11,1,11,4,11,113,8,
  	11,11,11,12,11,114,3,11,117,8,11,1,12,1,12,3,12,121,8,12,1,13,1,13,4,
  	13,125,8,13,11,13,12,13,126,3,13,129,8,13,1,14,1,14,1,14,0,0,15,0,2,4,
  	6,8,10,12,14,16,18,20,22,24,26,28,0,1,1,0,10,11,138,0,36,1,0,0,0,2,40,
  	1,0,0,0,4,42,1,0,0,0,6,57,1,0,0,0,8,62,1,0,0,0,10,67,1,0,0,0,12,71,1,
  	0,0,0,14,75,1,0,0,0,16,80,1,0,0,0,18,88,1,0,0,0,20,107,1,0,0,0,22,109,
  	1,0,0,0,24,120,1,0,0,0,26,122,1,0,0,0,28,130,1,0,0,0,30,33,3,2,1,0,31,
  	33,3,10,5,0,32,30,1,0,0,0,32,31,1,0,0,0,33,34,1,0,0,0,34,32,1,0,0,0,34,
  	35,1,0,0,0,35,37,1,0,0,0,36,32,1,0,0,0,36,37,1,0,0,0,37,38,1,0,0,0,38,
  	39,5,0,0,1,39,1,1,0,0,0,40,41,3,4,2,0,41,3,1,0,0,0,42,43,5,9,0,0,43,44,
  	3,6,3,0,44,53,5,1,0,0,45,46,5,9,0,0,46,47,3,6,3,0,47,48,5,1,0,0,48,50,
  	1,0,0,0,49,45,1,0,0,0,50,51,1,0,0,0,51,49,1,0,0,0,51,52,1,0,0,0,52,54,
  	1,0,0,0,53,49,1,0,0,0,53,54,1,0,0,0,54,55,1,0,0,0,55,56,3,8,4,0,56,5,
  	1,0,0,0,57,58,5,2,0,0,58,59,5,9,0,0,59,7,1,0,0,0,60,63,5,9,0,0,61,63,
  	3,10,5,0,62,60,1,0,0,0,62,61,1,0,0,0,63,9,1,0,0,0,64,68,3,20,10,0,65,
  	68,3,12,6,0,66,68,3,26,13,0,67,64,1,0,0,0,67,65,1,0,0,0,67,66,1,0,0,0,
  	68,11,1,0,0,0,69,72,3,16,8,0,70,72,3,14,7,0,71,69,1,0,0,0,71,70,1,0,0,
  	0,72,13,1,0,0,0,73,76,5,9,0,0,74,76,3,16,8,0,75,73,1,0,0,0,75,74,1,0,
  	0,0,76,77,1,0,0,0,77,78,5,3,0,0,78,79,3,20,10,0,79,15,1,0,0,0,80,81,5,
  	4,0,0,81,82,3,18,9,0,82,84,5,5,0,0,83,85,3,22,11,0,84,83,1,0,0,0,84,85,
  	1,0,0,0,85,86,1,0,0,0,86,87,5,6,0,0,87,17,1,0,0,0,88,95,5,9,0,0,89,90,
  	5,7,0,0,90,92,5,9,0,0,91,89,1,0,0,0,92,93,1,0,0,0,93,91,1,0,0,0,93,94,
  	1,0,0,0,94,96,1,0,0,0,95,91,1,0,0,0,95,96,1,0,0,0,96,19,1,0,0,0,97,98,
  	5,9,0,0,98,100,5,5,0,0,99,101,3,22,11,0,100,99,1,0,0,0,100,101,1,0,0,
  	0,101,102,1,0,0,0,102,108,5,6,0,0,103,105,5,9,0,0,104,106,3,22,11,0,105,
  	104,1,0,0,0,105,106,1,0,0,0,106,108,1,0,0,0,107,97,1,0,0,0,107,103,1,
  	0,0,0,108,21,1,0,0,0,109,116,3,24,12,0,110,111,5,8,0,0,111,113,3,24,12,
  	0,112,110,1,0,0,0,113,114,1,0,0,0,114,112,1,0,0,0,114,115,1,0,0,0,115,
  	117,1,0,0,0,116,112,1,0,0,0,116,117,1,0,0,0,117,23,1,0,0,0,118,121,5,
  	9,0,0,119,121,3,10,5,0,120,118,1,0,0,0,120,119,1,0,0,0,121,25,1,0,0,0,
  	122,128,3,28,14,0,123,125,3,28,14,0,124,123,1,0,0,0,125,126,1,0,0,0,126,
  	124,1,0,0,0,126,127,1,0,0,0,127,129,1,0,0,0,128,124,1,0,0,0,128,129,1,
  	0,0,0,129,27,1,0,0,0,130,131,7,0,0,0,131,29,1,0,0,0,20,32,34,36,51,53,
  	62,67,71,75,84,93,95,100,105,107,114,116,120,126,128
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  fusionParserStaticData = staticData.release();
}

}

fusionParser::fusionParser(TokenStream *input) : fusionParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

fusionParser::fusionParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  fusionParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *fusionParserStaticData->atn, fusionParserStaticData->decisionToDFA, fusionParserStaticData->sharedContextCache, options);
}

fusionParser::~fusionParser() {
  delete _interpreter;
}

const atn::ATN& fusionParser::getATN() const {
  return *fusionParserStaticData->atn;
}

std::string fusionParser::getGrammarFileName() const {
  return "fusion.g4";
}

const std::vector<std::string>& fusionParser::getRuleNames() const {
  return fusionParserStaticData->ruleNames;
}

const dfa::Vocabulary& fusionParser::getVocabulary() const {
  return fusionParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView fusionParser::getSerializedATN() const {
  return fusionParserStaticData->serializedATN;
}


//----------------- StartContext ------------------------------------------------------------------

fusionParser::StartContext::StartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fusionParser::StartContext::EOF() {
  return getToken(fusionParser::EOF, 0);
}

std::vector<fusionParser::StmtContext *> fusionParser::StartContext::stmt() {
  return getRuleContexts<fusionParser::StmtContext>();
}

fusionParser::StmtContext* fusionParser::StartContext::stmt(size_t i) {
  return getRuleContext<fusionParser::StmtContext>(i);
}

std::vector<fusionParser::ExprContext *> fusionParser::StartContext::expr() {
  return getRuleContexts<fusionParser::ExprContext>();
}

fusionParser::ExprContext* fusionParser::StartContext::expr(size_t i) {
  return getRuleContext<fusionParser::ExprContext>(i);
}


size_t fusionParser::StartContext::getRuleIndex() const {
  return fusionParser::RuleStart;
}

void fusionParser::StartContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fusionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStart(this);
}

void fusionParser::StartContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fusionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStart(this);
}


std::any fusionParser::StartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fusionVisitor*>(visitor))
    return parserVisitor->visitStart(this);
  else
    return visitor->visitChildren(this);
}

fusionParser::StartContext* fusionParser::start() {
  StartContext *_localctx = _tracker.createInstance<StartContext>(_ctx, getState());
  enterRule(_localctx, 0, fusionParser::RuleStart);
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
    setState(36);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3600) != 0)) {
      setState(32); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(32);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
        case 1: {
          setState(30);
          stmt();
          break;
        }

        case 2: {
          setState(31);
          expr();
          break;
        }

        default:
          break;
        }
        setState(34); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 3600) != 0));
    }
    setState(38);
    match(fusionParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

fusionParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fusionParser::Var_declContext* fusionParser::StmtContext::var_decl() {
  return getRuleContext<fusionParser::Var_declContext>(0);
}


size_t fusionParser::StmtContext::getRuleIndex() const {
  return fusionParser::RuleStmt;
}

void fusionParser::StmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fusionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmt(this);
}

void fusionParser::StmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fusionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmt(this);
}


std::any fusionParser::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fusionVisitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}

fusionParser::StmtContext* fusionParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 2, fusionParser::RuleStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(40);
    var_decl();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_declContext ------------------------------------------------------------------

fusionParser::Var_declContext::Var_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> fusionParser::Var_declContext::IDENTIFIER() {
  return getTokens(fusionParser::IDENTIFIER);
}

tree::TerminalNode* fusionParser::Var_declContext::IDENTIFIER(size_t i) {
  return getToken(fusionParser::IDENTIFIER, i);
}

std::vector<fusionParser::Var_typeContext *> fusionParser::Var_declContext::var_type() {
  return getRuleContexts<fusionParser::Var_typeContext>();
}

fusionParser::Var_typeContext* fusionParser::Var_declContext::var_type(size_t i) {
  return getRuleContext<fusionParser::Var_typeContext>(i);
}

fusionParser::Var_valueContext* fusionParser::Var_declContext::var_value() {
  return getRuleContext<fusionParser::Var_valueContext>(0);
}


size_t fusionParser::Var_declContext::getRuleIndex() const {
  return fusionParser::RuleVar_decl;
}

void fusionParser::Var_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fusionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar_decl(this);
}

void fusionParser::Var_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fusionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar_decl(this);
}


std::any fusionParser::Var_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fusionVisitor*>(visitor))
    return parserVisitor->visitVar_decl(this);
  else
    return visitor->visitChildren(this);
}

fusionParser::Var_declContext* fusionParser::var_decl() {
  Var_declContext *_localctx = _tracker.createInstance<Var_declContext>(_ctx, getState());
  enterRule(_localctx, 4, fusionParser::RuleVar_decl);

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
    setState(42);
    match(fusionParser::IDENTIFIER);
    setState(43);
    var_type();
    setState(44);
    match(fusionParser::T__0);
    setState(53);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      setState(49); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(45);
                match(fusionParser::IDENTIFIER);
                setState(46);
                var_type();
                setState(47);
                match(fusionParser::T__0);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(51); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    default:
      break;
    }
    setState(55);
    var_value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_typeContext ------------------------------------------------------------------

fusionParser::Var_typeContext::Var_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fusionParser::Var_typeContext::IDENTIFIER() {
  return getToken(fusionParser::IDENTIFIER, 0);
}


size_t fusionParser::Var_typeContext::getRuleIndex() const {
  return fusionParser::RuleVar_type;
}

void fusionParser::Var_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fusionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar_type(this);
}

void fusionParser::Var_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fusionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar_type(this);
}


std::any fusionParser::Var_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fusionVisitor*>(visitor))
    return parserVisitor->visitVar_type(this);
  else
    return visitor->visitChildren(this);
}

fusionParser::Var_typeContext* fusionParser::var_type() {
  Var_typeContext *_localctx = _tracker.createInstance<Var_typeContext>(_ctx, getState());
  enterRule(_localctx, 6, fusionParser::RuleVar_type);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(57);
    match(fusionParser::T__1);
    setState(58);
    match(fusionParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_valueContext ------------------------------------------------------------------

fusionParser::Var_valueContext::Var_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fusionParser::Var_valueContext::IDENTIFIER() {
  return getToken(fusionParser::IDENTIFIER, 0);
}

fusionParser::ExprContext* fusionParser::Var_valueContext::expr() {
  return getRuleContext<fusionParser::ExprContext>(0);
}


size_t fusionParser::Var_valueContext::getRuleIndex() const {
  return fusionParser::RuleVar_value;
}

void fusionParser::Var_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fusionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar_value(this);
}

void fusionParser::Var_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fusionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar_value(this);
}


std::any fusionParser::Var_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fusionVisitor*>(visitor))
    return parserVisitor->visitVar_value(this);
  else
    return visitor->visitChildren(this);
}

fusionParser::Var_valueContext* fusionParser::var_value() {
  Var_valueContext *_localctx = _tracker.createInstance<Var_valueContext>(_ctx, getState());
  enterRule(_localctx, 8, fusionParser::RuleVar_value);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(62);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(60);
      match(fusionParser::IDENTIFIER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(61);
      expr();
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

//----------------- ExprContext ------------------------------------------------------------------

fusionParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fusionParser::Func_callContext* fusionParser::ExprContext::func_call() {
  return getRuleContext<fusionParser::Func_callContext>(0);
}

fusionParser::Class_opsContext* fusionParser::ExprContext::class_ops() {
  return getRuleContext<fusionParser::Class_opsContext>(0);
}

fusionParser::TypeobjectsContext* fusionParser::ExprContext::typeobjects() {
  return getRuleContext<fusionParser::TypeobjectsContext>(0);
}


size_t fusionParser::ExprContext::getRuleIndex() const {
  return fusionParser::RuleExpr;
}

void fusionParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fusionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void fusionParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fusionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}


std::any fusionParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fusionVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}

fusionParser::ExprContext* fusionParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 10, fusionParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(67);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(64);
      func_call();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(65);
      class_ops();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(66);
      typeobjects();
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

//----------------- Class_opsContext ------------------------------------------------------------------

fusionParser::Class_opsContext::Class_opsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fusionParser::Class_object_creationContext* fusionParser::Class_opsContext::class_object_creation() {
  return getRuleContext<fusionParser::Class_object_creationContext>(0);
}

fusionParser::Class_member_callContext* fusionParser::Class_opsContext::class_member_call() {
  return getRuleContext<fusionParser::Class_member_callContext>(0);
}


size_t fusionParser::Class_opsContext::getRuleIndex() const {
  return fusionParser::RuleClass_ops;
}

void fusionParser::Class_opsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fusionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClass_ops(this);
}

void fusionParser::Class_opsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fusionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClass_ops(this);
}


std::any fusionParser::Class_opsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fusionVisitor*>(visitor))
    return parserVisitor->visitClass_ops(this);
  else
    return visitor->visitChildren(this);
}

fusionParser::Class_opsContext* fusionParser::class_ops() {
  Class_opsContext *_localctx = _tracker.createInstance<Class_opsContext>(_ctx, getState());
  enterRule(_localctx, 12, fusionParser::RuleClass_ops);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(71);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(69);
      class_object_creation();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(70);
      class_member_call();
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

//----------------- Class_member_callContext ------------------------------------------------------------------

fusionParser::Class_member_callContext::Class_member_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fusionParser::Func_callContext* fusionParser::Class_member_callContext::func_call() {
  return getRuleContext<fusionParser::Func_callContext>(0);
}

tree::TerminalNode* fusionParser::Class_member_callContext::IDENTIFIER() {
  return getToken(fusionParser::IDENTIFIER, 0);
}

fusionParser::Class_object_creationContext* fusionParser::Class_member_callContext::class_object_creation() {
  return getRuleContext<fusionParser::Class_object_creationContext>(0);
}


size_t fusionParser::Class_member_callContext::getRuleIndex() const {
  return fusionParser::RuleClass_member_call;
}

void fusionParser::Class_member_callContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fusionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClass_member_call(this);
}

void fusionParser::Class_member_callContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fusionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClass_member_call(this);
}


std::any fusionParser::Class_member_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fusionVisitor*>(visitor))
    return parserVisitor->visitClass_member_call(this);
  else
    return visitor->visitChildren(this);
}

fusionParser::Class_member_callContext* fusionParser::class_member_call() {
  Class_member_callContext *_localctx = _tracker.createInstance<Class_member_callContext>(_ctx, getState());
  enterRule(_localctx, 14, fusionParser::RuleClass_member_call);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(75);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case fusionParser::IDENTIFIER: {
        setState(73);
        match(fusionParser::IDENTIFIER);
        break;
      }

      case fusionParser::T__3: {
        setState(74);
        class_object_creation();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(77);
    match(fusionParser::T__2);
    setState(78);
    func_call();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_object_creationContext ------------------------------------------------------------------

fusionParser::Class_object_creationContext::Class_object_creationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fusionParser::Class_hierarchyContext* fusionParser::Class_object_creationContext::class_hierarchy() {
  return getRuleContext<fusionParser::Class_hierarchyContext>(0);
}

fusionParser::ParamsContext* fusionParser::Class_object_creationContext::params() {
  return getRuleContext<fusionParser::ParamsContext>(0);
}


size_t fusionParser::Class_object_creationContext::getRuleIndex() const {
  return fusionParser::RuleClass_object_creation;
}

void fusionParser::Class_object_creationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fusionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClass_object_creation(this);
}

void fusionParser::Class_object_creationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fusionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClass_object_creation(this);
}


std::any fusionParser::Class_object_creationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fusionVisitor*>(visitor))
    return parserVisitor->visitClass_object_creation(this);
  else
    return visitor->visitChildren(this);
}

fusionParser::Class_object_creationContext* fusionParser::class_object_creation() {
  Class_object_creationContext *_localctx = _tracker.createInstance<Class_object_creationContext>(_ctx, getState());
  enterRule(_localctx, 16, fusionParser::RuleClass_object_creation);
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
    setState(80);
    match(fusionParser::T__3);
    setState(81);
    class_hierarchy();
    setState(82);
    match(fusionParser::T__4);
    setState(84);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3600) != 0)) {
      setState(83);
      params();
    }
    setState(86);
    match(fusionParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_hierarchyContext ------------------------------------------------------------------

fusionParser::Class_hierarchyContext::Class_hierarchyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> fusionParser::Class_hierarchyContext::IDENTIFIER() {
  return getTokens(fusionParser::IDENTIFIER);
}

tree::TerminalNode* fusionParser::Class_hierarchyContext::IDENTIFIER(size_t i) {
  return getToken(fusionParser::IDENTIFIER, i);
}


size_t fusionParser::Class_hierarchyContext::getRuleIndex() const {
  return fusionParser::RuleClass_hierarchy;
}

void fusionParser::Class_hierarchyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fusionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClass_hierarchy(this);
}

void fusionParser::Class_hierarchyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fusionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClass_hierarchy(this);
}


std::any fusionParser::Class_hierarchyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fusionVisitor*>(visitor))
    return parserVisitor->visitClass_hierarchy(this);
  else
    return visitor->visitChildren(this);
}

fusionParser::Class_hierarchyContext* fusionParser::class_hierarchy() {
  Class_hierarchyContext *_localctx = _tracker.createInstance<Class_hierarchyContext>(_ctx, getState());
  enterRule(_localctx, 18, fusionParser::RuleClass_hierarchy);
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
    setState(88);
    match(fusionParser::IDENTIFIER);
    setState(95);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == fusionParser::T__6) {
      setState(91); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(89);
        match(fusionParser::T__6);
        setState(90);
        match(fusionParser::IDENTIFIER);
        setState(93); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == fusionParser::T__6);
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

fusionParser::Func_callContext::Func_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fusionParser::Func_callContext::IDENTIFIER() {
  return getToken(fusionParser::IDENTIFIER, 0);
}

fusionParser::ParamsContext* fusionParser::Func_callContext::params() {
  return getRuleContext<fusionParser::ParamsContext>(0);
}


size_t fusionParser::Func_callContext::getRuleIndex() const {
  return fusionParser::RuleFunc_call;
}

void fusionParser::Func_callContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fusionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_call(this);
}

void fusionParser::Func_callContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fusionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_call(this);
}


std::any fusionParser::Func_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fusionVisitor*>(visitor))
    return parserVisitor->visitFunc_call(this);
  else
    return visitor->visitChildren(this);
}

fusionParser::Func_callContext* fusionParser::func_call() {
  Func_callContext *_localctx = _tracker.createInstance<Func_callContext>(_ctx, getState());
  enterRule(_localctx, 20, fusionParser::RuleFunc_call);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(107);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(97);
      match(fusionParser::IDENTIFIER);
      setState(98);
      match(fusionParser::T__4);
      setState(100);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 3600) != 0)) {
        setState(99);
        params();
      }
      setState(102);
      match(fusionParser::T__5);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(103);
      match(fusionParser::IDENTIFIER);
      setState(105);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
      case 1: {
        setState(104);
        params();
        break;
      }

      default:
        break;
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

//----------------- ParamsContext ------------------------------------------------------------------

fusionParser::ParamsContext::ParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<fusionParser::ParamContext *> fusionParser::ParamsContext::param() {
  return getRuleContexts<fusionParser::ParamContext>();
}

fusionParser::ParamContext* fusionParser::ParamsContext::param(size_t i) {
  return getRuleContext<fusionParser::ParamContext>(i);
}


size_t fusionParser::ParamsContext::getRuleIndex() const {
  return fusionParser::RuleParams;
}

void fusionParser::ParamsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fusionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParams(this);
}

void fusionParser::ParamsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fusionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParams(this);
}


std::any fusionParser::ParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fusionVisitor*>(visitor))
    return parserVisitor->visitParams(this);
  else
    return visitor->visitChildren(this);
}

fusionParser::ParamsContext* fusionParser::params() {
  ParamsContext *_localctx = _tracker.createInstance<ParamsContext>(_ctx, getState());
  enterRule(_localctx, 22, fusionParser::RuleParams);

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
    setState(109);
    param();
    setState(116);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      setState(112); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(110);
                match(fusionParser::T__7);
                setState(111);
                param();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(114); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
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

fusionParser::ParamContext::ParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fusionParser::ParamContext::IDENTIFIER() {
  return getToken(fusionParser::IDENTIFIER, 0);
}

fusionParser::ExprContext* fusionParser::ParamContext::expr() {
  return getRuleContext<fusionParser::ExprContext>(0);
}


size_t fusionParser::ParamContext::getRuleIndex() const {
  return fusionParser::RuleParam;
}

void fusionParser::ParamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fusionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParam(this);
}

void fusionParser::ParamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fusionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParam(this);
}


std::any fusionParser::ParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fusionVisitor*>(visitor))
    return parserVisitor->visitParam(this);
  else
    return visitor->visitChildren(this);
}

fusionParser::ParamContext* fusionParser::param() {
  ParamContext *_localctx = _tracker.createInstance<ParamContext>(_ctx, getState());
  enterRule(_localctx, 24, fusionParser::RuleParam);

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
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(118);
      match(fusionParser::IDENTIFIER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(119);
      expr();
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

//----------------- TypeobjectsContext ------------------------------------------------------------------

fusionParser::TypeobjectsContext::TypeobjectsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<fusionParser::TypeobjectContext *> fusionParser::TypeobjectsContext::typeobject() {
  return getRuleContexts<fusionParser::TypeobjectContext>();
}

fusionParser::TypeobjectContext* fusionParser::TypeobjectsContext::typeobject(size_t i) {
  return getRuleContext<fusionParser::TypeobjectContext>(i);
}


size_t fusionParser::TypeobjectsContext::getRuleIndex() const {
  return fusionParser::RuleTypeobjects;
}

void fusionParser::TypeobjectsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fusionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeobjects(this);
}

void fusionParser::TypeobjectsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fusionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeobjects(this);
}


std::any fusionParser::TypeobjectsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fusionVisitor*>(visitor))
    return parserVisitor->visitTypeobjects(this);
  else
    return visitor->visitChildren(this);
}

fusionParser::TypeobjectsContext* fusionParser::typeobjects() {
  TypeobjectsContext *_localctx = _tracker.createInstance<TypeobjectsContext>(_ctx, getState());
  enterRule(_localctx, 26, fusionParser::RuleTypeobjects);

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
    setState(122);
    typeobject();
    setState(128);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      setState(124); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(123);
                typeobject();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(126); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
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

//----------------- TypeobjectContext ------------------------------------------------------------------

fusionParser::TypeobjectContext::TypeobjectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fusionParser::TypeobjectContext::STR() {
  return getToken(fusionParser::STR, 0);
}

tree::TerminalNode* fusionParser::TypeobjectContext::INT() {
  return getToken(fusionParser::INT, 0);
}


size_t fusionParser::TypeobjectContext::getRuleIndex() const {
  return fusionParser::RuleTypeobject;
}

void fusionParser::TypeobjectContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fusionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeobject(this);
}

void fusionParser::TypeobjectContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fusionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeobject(this);
}


std::any fusionParser::TypeobjectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fusionVisitor*>(visitor))
    return parserVisitor->visitTypeobject(this);
  else
    return visitor->visitChildren(this);
}

fusionParser::TypeobjectContext* fusionParser::typeobject() {
  TypeobjectContext *_localctx = _tracker.createInstance<TypeobjectContext>(_ctx, getState());
  enterRule(_localctx, 28, fusionParser::RuleTypeobject);
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
    setState(130);
    _la = _input->LA(1);
    if (!(_la == fusionParser::STR

    || _la == fusionParser::INT)) {
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

void fusionParser::initialize() {
  ::antlr4::internal::call_once(fusionParserOnceFlag, fusionParserInitialize);
}
