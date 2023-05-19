
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
  	4,1,13,136,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,1,0,1,0,4,0,33,8,0,11,0,12,0,34,3,0,37,8,0,1,0,1,0,1,1,1,1,1,2,1,2,
  	3,2,45,8,2,1,2,1,2,1,2,3,2,50,8,2,1,2,4,2,53,8,2,11,2,12,2,54,3,2,57,
  	8,2,1,2,1,2,1,3,1,3,1,3,1,4,1,4,3,4,66,8,4,1,5,1,5,1,5,3,5,71,8,5,1,6,
  	1,6,3,6,75,8,6,1,7,1,7,3,7,79,8,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,3,8,88,
  	8,8,1,8,1,8,1,9,1,9,1,9,4,9,95,8,9,11,9,12,9,96,3,9,99,8,9,1,10,1,10,
  	1,10,3,10,104,8,10,1,10,1,10,1,10,3,10,109,8,10,3,10,111,8,10,1,11,1,
  	11,1,11,4,11,116,8,11,11,11,12,11,117,3,11,120,8,11,1,12,1,12,3,12,124,
  	8,12,1,13,1,13,4,13,128,8,13,11,13,12,13,129,3,13,132,8,13,1,14,1,14,
  	1,14,0,0,15,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,0,1,1,0,10,11,143,
  	0,36,1,0,0,0,2,40,1,0,0,0,4,42,1,0,0,0,6,60,1,0,0,0,8,65,1,0,0,0,10,70,
  	1,0,0,0,12,74,1,0,0,0,14,78,1,0,0,0,16,83,1,0,0,0,18,91,1,0,0,0,20,110,
  	1,0,0,0,22,112,1,0,0,0,24,123,1,0,0,0,26,125,1,0,0,0,28,133,1,0,0,0,30,
  	33,3,2,1,0,31,33,3,10,5,0,32,30,1,0,0,0,32,31,1,0,0,0,33,34,1,0,0,0,34,
  	32,1,0,0,0,34,35,1,0,0,0,35,37,1,0,0,0,36,32,1,0,0,0,36,37,1,0,0,0,37,
  	38,1,0,0,0,38,39,5,0,0,1,39,1,1,0,0,0,40,41,3,4,2,0,41,3,1,0,0,0,42,44,
  	5,9,0,0,43,45,3,6,3,0,44,43,1,0,0,0,44,45,1,0,0,0,45,46,1,0,0,0,46,56,
  	5,1,0,0,47,49,5,9,0,0,48,50,3,6,3,0,49,48,1,0,0,0,49,50,1,0,0,0,50,51,
  	1,0,0,0,51,53,5,1,0,0,52,47,1,0,0,0,53,54,1,0,0,0,54,52,1,0,0,0,54,55,
  	1,0,0,0,55,57,1,0,0,0,56,52,1,0,0,0,56,57,1,0,0,0,57,58,1,0,0,0,58,59,
  	3,8,4,0,59,5,1,0,0,0,60,61,5,2,0,0,61,62,5,9,0,0,62,7,1,0,0,0,63,66,5,
  	9,0,0,64,66,3,10,5,0,65,63,1,0,0,0,65,64,1,0,0,0,66,9,1,0,0,0,67,71,3,
  	20,10,0,68,71,3,12,6,0,69,71,3,26,13,0,70,67,1,0,0,0,70,68,1,0,0,0,70,
  	69,1,0,0,0,71,11,1,0,0,0,72,75,3,16,8,0,73,75,3,14,7,0,74,72,1,0,0,0,
  	74,73,1,0,0,0,75,13,1,0,0,0,76,79,5,9,0,0,77,79,3,16,8,0,78,76,1,0,0,
  	0,78,77,1,0,0,0,79,80,1,0,0,0,80,81,5,3,0,0,81,82,3,20,10,0,82,15,1,0,
  	0,0,83,84,5,4,0,0,84,85,3,18,9,0,85,87,5,5,0,0,86,88,3,22,11,0,87,86,
  	1,0,0,0,87,88,1,0,0,0,88,89,1,0,0,0,89,90,5,6,0,0,90,17,1,0,0,0,91,98,
  	5,9,0,0,92,93,5,7,0,0,93,95,5,9,0,0,94,92,1,0,0,0,95,96,1,0,0,0,96,94,
  	1,0,0,0,96,97,1,0,0,0,97,99,1,0,0,0,98,94,1,0,0,0,98,99,1,0,0,0,99,19,
  	1,0,0,0,100,101,5,9,0,0,101,103,5,5,0,0,102,104,3,22,11,0,103,102,1,0,
  	0,0,103,104,1,0,0,0,104,105,1,0,0,0,105,111,5,6,0,0,106,108,5,9,0,0,107,
  	109,3,22,11,0,108,107,1,0,0,0,108,109,1,0,0,0,109,111,1,0,0,0,110,100,
  	1,0,0,0,110,106,1,0,0,0,111,21,1,0,0,0,112,119,3,24,12,0,113,114,5,8,
  	0,0,114,116,3,24,12,0,115,113,1,0,0,0,116,117,1,0,0,0,117,115,1,0,0,0,
  	117,118,1,0,0,0,118,120,1,0,0,0,119,115,1,0,0,0,119,120,1,0,0,0,120,23,
  	1,0,0,0,121,124,5,9,0,0,122,124,3,10,5,0,123,121,1,0,0,0,123,122,1,0,
  	0,0,124,25,1,0,0,0,125,131,3,28,14,0,126,128,3,28,14,0,127,126,1,0,0,
  	0,128,129,1,0,0,0,129,127,1,0,0,0,129,130,1,0,0,0,130,132,1,0,0,0,131,
  	127,1,0,0,0,131,132,1,0,0,0,132,27,1,0,0,0,133,134,7,0,0,0,134,29,1,0,
  	0,0,22,32,34,36,44,49,54,56,65,70,74,78,87,96,98,103,108,110,117,119,
  	123,129,131
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

fusionParser::Var_valueContext* fusionParser::Var_declContext::var_value() {
  return getRuleContext<fusionParser::Var_valueContext>(0);
}

std::vector<fusionParser::Var_typeContext *> fusionParser::Var_declContext::var_type() {
  return getRuleContexts<fusionParser::Var_typeContext>();
}

fusionParser::Var_typeContext* fusionParser::Var_declContext::var_type(size_t i) {
  return getRuleContext<fusionParser::Var_typeContext>(i);
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
    setState(42);
    match(fusionParser::IDENTIFIER);
    setState(44);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == fusionParser::T__1) {
      setState(43);
      var_type();
    }
    setState(46);
    match(fusionParser::T__0);
    setState(56);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      setState(52); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(47);
                match(fusionParser::IDENTIFIER);
                setState(49);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if (_la == fusionParser::T__1) {
                  setState(48);
                  var_type();
                }
                setState(51);
                match(fusionParser::T__0);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(54); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    default:
      break;
    }
    setState(58);
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
    setState(60);
    match(fusionParser::T__1);
    setState(61);
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
    setState(65);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(63);
      match(fusionParser::IDENTIFIER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(64);
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
    setState(70);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(67);
      func_call();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(68);
      class_ops();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(69);
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
    setState(74);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(72);
      class_object_creation();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(73);
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
    setState(78);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case fusionParser::IDENTIFIER: {
        setState(76);
        match(fusionParser::IDENTIFIER);
        break;
      }

      case fusionParser::T__3: {
        setState(77);
        class_object_creation();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(80);
    match(fusionParser::T__2);
    setState(81);
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
    setState(83);
    match(fusionParser::T__3);
    setState(84);
    class_hierarchy();
    setState(85);
    match(fusionParser::T__4);
    setState(87);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3600) != 0)) {
      setState(86);
      params();
    }
    setState(89);
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
    setState(91);
    match(fusionParser::IDENTIFIER);
    setState(98);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == fusionParser::T__6) {
      setState(94); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(92);
        match(fusionParser::T__6);
        setState(93);
        match(fusionParser::IDENTIFIER);
        setState(96); 
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
    setState(110);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(100);
      match(fusionParser::IDENTIFIER);
      setState(101);
      match(fusionParser::T__4);
      setState(103);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 3600) != 0)) {
        setState(102);
        params();
      }
      setState(105);
      match(fusionParser::T__5);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(106);
      match(fusionParser::IDENTIFIER);
      setState(108);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
      case 1: {
        setState(107);
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
    setState(112);
    param();
    setState(119);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      setState(115); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(113);
                match(fusionParser::T__7);
                setState(114);
                param();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(117); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
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
    setState(123);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(121);
      match(fusionParser::IDENTIFIER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(122);
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
    setState(125);
    typeobject();
    setState(131);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      setState(127); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(126);
                typeobject();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(129); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
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
    setState(133);
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
