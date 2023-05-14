
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
      "stmts", "stmt", "class_member_call", "class_member", "func_call", 
      "params", "param", "typeobjects", "typeobject"
    },
    std::vector<std::string>{
      "", "'.'", "','", "", "'('", "')'"
    },
    std::vector<std::string>{
      "", "", "", "IDENTIFIER", "LOBRACE", "ROBRACE", "STRING", "ESC_SEQ"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,7,76,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,7,
  	7,7,2,8,7,8,1,0,4,0,20,8,0,11,0,12,0,21,1,0,1,0,1,1,1,1,3,1,28,8,1,1,
  	2,1,2,1,2,1,2,1,2,1,2,3,2,36,8,2,1,2,1,2,1,2,3,2,41,8,2,1,3,1,3,1,4,1,
  	4,1,4,3,4,48,8,4,1,4,1,4,1,4,3,4,53,8,4,1,5,1,5,1,5,4,5,58,8,5,11,5,12,
  	5,59,3,5,62,8,5,1,6,1,6,1,7,1,7,4,7,68,8,7,11,7,12,7,69,3,7,72,8,7,1,
  	8,1,8,1,8,0,0,9,0,2,4,6,8,10,12,14,16,0,0,76,0,19,1,0,0,0,2,27,1,0,0,
  	0,4,40,1,0,0,0,6,42,1,0,0,0,8,52,1,0,0,0,10,54,1,0,0,0,12,63,1,0,0,0,
  	14,65,1,0,0,0,16,73,1,0,0,0,18,20,3,2,1,0,19,18,1,0,0,0,20,21,1,0,0,0,
  	21,19,1,0,0,0,21,22,1,0,0,0,22,23,1,0,0,0,23,24,5,0,0,1,24,1,1,0,0,0,
  	25,28,3,8,4,0,26,28,3,4,2,0,27,25,1,0,0,0,27,26,1,0,0,0,28,3,1,0,0,0,
  	29,30,5,3,0,0,30,31,5,1,0,0,31,41,3,6,3,0,32,33,5,3,0,0,33,35,5,4,0,0,
  	34,36,3,10,5,0,35,34,1,0,0,0,35,36,1,0,0,0,36,37,1,0,0,0,37,38,5,5,0,
  	0,38,39,5,1,0,0,39,41,3,6,3,0,40,29,1,0,0,0,40,32,1,0,0,0,41,5,1,0,0,
  	0,42,43,3,8,4,0,43,7,1,0,0,0,44,45,5,3,0,0,45,47,5,4,0,0,46,48,3,10,5,
  	0,47,46,1,0,0,0,47,48,1,0,0,0,48,49,1,0,0,0,49,53,5,5,0,0,50,51,5,3,0,
  	0,51,53,3,10,5,0,52,44,1,0,0,0,52,50,1,0,0,0,53,9,1,0,0,0,54,61,3,12,
  	6,0,55,56,5,2,0,0,56,58,3,12,6,0,57,55,1,0,0,0,58,59,1,0,0,0,59,57,1,
  	0,0,0,59,60,1,0,0,0,60,62,1,0,0,0,61,57,1,0,0,0,61,62,1,0,0,0,62,11,1,
  	0,0,0,63,64,3,14,7,0,64,13,1,0,0,0,65,71,3,16,8,0,66,68,3,16,8,0,67,66,
  	1,0,0,0,68,69,1,0,0,0,69,67,1,0,0,0,69,70,1,0,0,0,70,72,1,0,0,0,71,67,
  	1,0,0,0,71,72,1,0,0,0,72,15,1,0,0,0,73,74,5,6,0,0,74,17,1,0,0,0,10,21,
  	27,35,40,47,52,59,61,69,71
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
    setState(19); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(18);
      stmt();
      setState(21); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == fusionParser::IDENTIFIER);
    setState(23);
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
    setState(27);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(25);
      func_call();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(26);
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

tree::TerminalNode* fusionParser::Class_member_callContext::LOBRACE() {
  return getToken(fusionParser::LOBRACE, 0);
}

tree::TerminalNode* fusionParser::Class_member_callContext::ROBRACE() {
  return getToken(fusionParser::ROBRACE, 0);
}

fusionParser::ParamsContext* fusionParser::Class_member_callContext::params() {
  return getRuleContext<fusionParser::ParamsContext>(0);
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
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(40);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(29);
      match(fusionParser::IDENTIFIER);
      setState(30);
      match(fusionParser::T__0);
      setState(31);
      class_member();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(32);
      match(fusionParser::IDENTIFIER);
      setState(33);
      match(fusionParser::LOBRACE);
      setState(35);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fusionParser::STRING) {
        setState(34);
        params();
      }
      setState(37);
      match(fusionParser::ROBRACE);
      setState(38);
      match(fusionParser::T__0);
      setState(39);
      class_member();
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
    setState(42);
    func_call();
   
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
  enterRule(_localctx, 8, fusionParser::RuleFunc_call);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(52);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(44);
      match(fusionParser::IDENTIFIER);
      setState(45);
      match(fusionParser::LOBRACE);
      setState(47);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fusionParser::STRING) {
        setState(46);
        params();
      }
      setState(49);
      match(fusionParser::ROBRACE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(50);
      match(fusionParser::IDENTIFIER);
      setState(51);
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
  enterRule(_localctx, 10, fusionParser::RuleParams);
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
    setState(54);
    param();
    setState(61);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == fusionParser::T__1) {
      setState(57); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(55);
        match(fusionParser::T__1);
        setState(56);
        param();
        setState(59); 
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
  enterRule(_localctx, 12, fusionParser::RuleParam);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(63);
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
  enterRule(_localctx, 14, fusionParser::RuleTypeobjects);
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
    setState(65);
    typeobject();
    setState(71);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == fusionParser::STRING) {
      setState(67); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(66);
        typeobject();
        setState(69); 
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
  enterRule(_localctx, 16, fusionParser::RuleTypeobject);

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
