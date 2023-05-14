
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
      "stmts", "stmt", "class_member_call", "class_member", "class_object", 
      "func_call", "params", "param", "typeobjects", "typeobject"
    },
    std::vector<std::string>{
      "", "'.'", "','", "", "'new'", "'('", "')'"
    },
    std::vector<std::string>{
      "", "", "", "IDENTIFIER", "NEW", "LOBRACE", "ROBRACE", "STRING", "ESC_SEQ"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,8,84,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,7,
  	7,7,2,8,7,8,2,9,7,9,1,0,4,0,22,8,0,11,0,12,0,23,1,0,1,0,1,1,1,1,3,1,30,
  	8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,39,8,2,1,3,1,3,1,4,1,4,1,4,1,4,3,
  	4,47,8,4,1,4,1,4,1,5,1,5,1,5,3,5,54,8,5,1,5,1,5,1,5,3,5,59,8,5,3,5,61,
  	8,5,1,6,1,6,1,6,4,6,66,8,6,11,6,12,6,67,3,6,70,8,6,1,7,1,7,1,8,1,8,4,
  	8,76,8,8,11,8,12,8,77,3,8,80,8,8,1,9,1,9,1,9,0,0,10,0,2,4,6,8,10,12,14,
  	16,18,0,0,84,0,21,1,0,0,0,2,29,1,0,0,0,4,38,1,0,0,0,6,40,1,0,0,0,8,42,
  	1,0,0,0,10,60,1,0,0,0,12,62,1,0,0,0,14,71,1,0,0,0,16,73,1,0,0,0,18,81,
  	1,0,0,0,20,22,3,2,1,0,21,20,1,0,0,0,22,23,1,0,0,0,23,21,1,0,0,0,23,24,
  	1,0,0,0,24,25,1,0,0,0,25,26,5,0,0,1,26,1,1,0,0,0,27,30,3,10,5,0,28,30,
  	3,4,2,0,29,27,1,0,0,0,29,28,1,0,0,0,30,3,1,0,0,0,31,32,5,3,0,0,32,33,
  	5,1,0,0,33,39,3,6,3,0,34,35,3,8,4,0,35,36,5,1,0,0,36,37,3,6,3,0,37,39,
  	1,0,0,0,38,31,1,0,0,0,38,34,1,0,0,0,39,5,1,0,0,0,40,41,3,10,5,0,41,7,
  	1,0,0,0,42,43,5,4,0,0,43,44,5,3,0,0,44,46,5,5,0,0,45,47,3,12,6,0,46,45,
  	1,0,0,0,46,47,1,0,0,0,47,48,1,0,0,0,48,49,5,6,0,0,49,9,1,0,0,0,50,51,
  	5,3,0,0,51,53,5,5,0,0,52,54,3,12,6,0,53,52,1,0,0,0,53,54,1,0,0,0,54,55,
  	1,0,0,0,55,61,5,6,0,0,56,58,5,3,0,0,57,59,3,12,6,0,58,57,1,0,0,0,58,59,
  	1,0,0,0,59,61,1,0,0,0,60,50,1,0,0,0,60,56,1,0,0,0,61,11,1,0,0,0,62,69,
  	3,14,7,0,63,64,5,2,0,0,64,66,3,14,7,0,65,63,1,0,0,0,66,67,1,0,0,0,67,
  	65,1,0,0,0,67,68,1,0,0,0,68,70,1,0,0,0,69,65,1,0,0,0,69,70,1,0,0,0,70,
  	13,1,0,0,0,71,72,3,16,8,0,72,15,1,0,0,0,73,79,3,18,9,0,74,76,3,18,9,0,
  	75,74,1,0,0,0,76,77,1,0,0,0,77,75,1,0,0,0,77,78,1,0,0,0,78,80,1,0,0,0,
  	79,75,1,0,0,0,79,80,1,0,0,0,80,17,1,0,0,0,81,82,5,7,0,0,82,19,1,0,0,0,
  	11,23,29,38,46,53,58,60,67,69,77,79
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


//----------------- StmtsContext ------------------------------------------------------------------

fusionParser::StmtsContext::StmtsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fusionParser::StmtsContext::EOF() {
  return getToken(fusionParser::EOF, 0);
}

std::vector<fusionParser::StmtContext *> fusionParser::StmtsContext::stmt() {
  return getRuleContexts<fusionParser::StmtContext>();
}

fusionParser::StmtContext* fusionParser::StmtsContext::stmt(size_t i) {
  return getRuleContext<fusionParser::StmtContext>(i);
}


size_t fusionParser::StmtsContext::getRuleIndex() const {
  return fusionParser::RuleStmts;
}

void fusionParser::StmtsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fusionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmts(this);
}

void fusionParser::StmtsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fusionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmts(this);
}


std::any fusionParser::StmtsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fusionVisitor*>(visitor))
    return parserVisitor->visitStmts(this);
  else
    return visitor->visitChildren(this);
}

fusionParser::StmtsContext* fusionParser::stmts() {
  StmtsContext *_localctx = _tracker.createInstance<StmtsContext>(_ctx, getState());
  enterRule(_localctx, 0, fusionParser::RuleStmts);
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
    setState(21); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(20);
      stmt();
      setState(23); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == fusionParser::IDENTIFIER

    || _la == fusionParser::NEW);
    setState(25);
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

fusionParser::Func_callContext* fusionParser::StmtContext::func_call() {
  return getRuleContext<fusionParser::Func_callContext>(0);
}

fusionParser::Class_member_callContext* fusionParser::StmtContext::class_member_call() {
  return getRuleContext<fusionParser::Class_member_callContext>(0);
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
    setState(29);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(27);
      func_call();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(28);
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

tree::TerminalNode* fusionParser::Class_member_callContext::IDENTIFIER() {
  return getToken(fusionParser::IDENTIFIER, 0);
}

fusionParser::Class_memberContext* fusionParser::Class_member_callContext::class_member() {
  return getRuleContext<fusionParser::Class_memberContext>(0);
}

fusionParser::Class_objectContext* fusionParser::Class_member_callContext::class_object() {
  return getRuleContext<fusionParser::Class_objectContext>(0);
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
  enterRule(_localctx, 4, fusionParser::RuleClass_member_call);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(38);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case fusionParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(31);
        match(fusionParser::IDENTIFIER);
        setState(32);
        match(fusionParser::T__0);
        setState(33);
        class_member();
        break;
      }

      case fusionParser::NEW: {
        enterOuterAlt(_localctx, 2);
        setState(34);
        class_object();
        setState(35);
        match(fusionParser::T__0);
        setState(36);
        class_member();
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

//----------------- Class_memberContext ------------------------------------------------------------------

fusionParser::Class_memberContext::Class_memberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fusionParser::Func_callContext* fusionParser::Class_memberContext::func_call() {
  return getRuleContext<fusionParser::Func_callContext>(0);
}


size_t fusionParser::Class_memberContext::getRuleIndex() const {
  return fusionParser::RuleClass_member;
}

void fusionParser::Class_memberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fusionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClass_member(this);
}

void fusionParser::Class_memberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fusionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClass_member(this);
}


std::any fusionParser::Class_memberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fusionVisitor*>(visitor))
    return parserVisitor->visitClass_member(this);
  else
    return visitor->visitChildren(this);
}

fusionParser::Class_memberContext* fusionParser::class_member() {
  Class_memberContext *_localctx = _tracker.createInstance<Class_memberContext>(_ctx, getState());
  enterRule(_localctx, 6, fusionParser::RuleClass_member);

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
    func_call();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_objectContext ------------------------------------------------------------------

fusionParser::Class_objectContext::Class_objectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fusionParser::Class_objectContext::NEW() {
  return getToken(fusionParser::NEW, 0);
}

tree::TerminalNode* fusionParser::Class_objectContext::IDENTIFIER() {
  return getToken(fusionParser::IDENTIFIER, 0);
}

tree::TerminalNode* fusionParser::Class_objectContext::LOBRACE() {
  return getToken(fusionParser::LOBRACE, 0);
}

tree::TerminalNode* fusionParser::Class_objectContext::ROBRACE() {
  return getToken(fusionParser::ROBRACE, 0);
}

fusionParser::ParamsContext* fusionParser::Class_objectContext::params() {
  return getRuleContext<fusionParser::ParamsContext>(0);
}


size_t fusionParser::Class_objectContext::getRuleIndex() const {
  return fusionParser::RuleClass_object;
}

void fusionParser::Class_objectContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fusionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClass_object(this);
}

void fusionParser::Class_objectContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fusionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClass_object(this);
}


std::any fusionParser::Class_objectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fusionVisitor*>(visitor))
    return parserVisitor->visitClass_object(this);
  else
    return visitor->visitChildren(this);
}

fusionParser::Class_objectContext* fusionParser::class_object() {
  Class_objectContext *_localctx = _tracker.createInstance<Class_objectContext>(_ctx, getState());
  enterRule(_localctx, 8, fusionParser::RuleClass_object);
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
    setState(42);
    match(fusionParser::NEW);
    setState(43);
    match(fusionParser::IDENTIFIER);
    setState(44);
    match(fusionParser::LOBRACE);
    setState(46);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == fusionParser::STRING) {
      setState(45);
      params();
    }
    setState(48);
    match(fusionParser::ROBRACE);
   
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

tree::TerminalNode* fusionParser::Func_callContext::LOBRACE() {
  return getToken(fusionParser::LOBRACE, 0);
}

tree::TerminalNode* fusionParser::Func_callContext::ROBRACE() {
  return getToken(fusionParser::ROBRACE, 0);
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
  enterRule(_localctx, 10, fusionParser::RuleFunc_call);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(60);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(50);
      match(fusionParser::IDENTIFIER);
      setState(51);
      match(fusionParser::LOBRACE);
      setState(53);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fusionParser::STRING) {
        setState(52);
        params();
      }
      setState(55);
      match(fusionParser::ROBRACE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(56);
      match(fusionParser::IDENTIFIER);
      setState(58);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fusionParser::STRING) {
        setState(57);
        params();
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
  enterRule(_localctx, 12, fusionParser::RuleParams);
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
    setState(62);
    param();
    setState(69);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == fusionParser::T__1) {
      setState(65); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(63);
        match(fusionParser::T__1);
        setState(64);
        param();
        setState(67); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == fusionParser::T__1);
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

fusionParser::TypeobjectsContext* fusionParser::ParamContext::typeobjects() {
  return getRuleContext<fusionParser::TypeobjectsContext>(0);
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
  enterRule(_localctx, 14, fusionParser::RuleParam);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(71);
    typeobjects();
   
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
  enterRule(_localctx, 16, fusionParser::RuleTypeobjects);
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
    setState(73);
    typeobject();
    setState(79);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == fusionParser::STRING) {
      setState(75); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(74);
        typeobject();
        setState(77); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == fusionParser::STRING);
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

tree::TerminalNode* fusionParser::TypeobjectContext::STRING() {
  return getToken(fusionParser::STRING, 0);
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
  enterRule(_localctx, 18, fusionParser::RuleTypeobject);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(81);
    match(fusionParser::STRING);
   
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
