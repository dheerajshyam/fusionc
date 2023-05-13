
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
      "stmts", "stmt", "func_call", "params", "param", "typeobjects", "typeobject"
    },
    std::vector<std::string>{
      "", "','", "", "'('", "')'"
    },
    std::vector<std::string>{
      "", "", "IDENTIFIER", "LOBRACE", "ROBRACE", "STRING", "ESC_SEQ"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,6,55,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,1,0,
  	4,0,16,8,0,11,0,12,0,17,1,0,1,0,1,1,1,1,1,2,1,2,1,2,3,2,27,8,2,1,2,1,
  	2,1,2,3,2,32,8,2,1,3,1,3,1,3,4,3,37,8,3,11,3,12,3,38,3,3,41,8,3,1,4,1,
  	4,1,5,1,5,4,5,47,8,5,11,5,12,5,48,3,5,51,8,5,1,6,1,6,1,6,0,0,7,0,2,4,
  	6,8,10,12,0,0,54,0,15,1,0,0,0,2,21,1,0,0,0,4,31,1,0,0,0,6,33,1,0,0,0,
  	8,42,1,0,0,0,10,44,1,0,0,0,12,52,1,0,0,0,14,16,3,2,1,0,15,14,1,0,0,0,
  	16,17,1,0,0,0,17,15,1,0,0,0,17,18,1,0,0,0,18,19,1,0,0,0,19,20,5,0,0,1,
  	20,1,1,0,0,0,21,22,3,4,2,0,22,3,1,0,0,0,23,24,5,2,0,0,24,26,5,3,0,0,25,
  	27,3,6,3,0,26,25,1,0,0,0,26,27,1,0,0,0,27,28,1,0,0,0,28,32,5,4,0,0,29,
  	30,5,2,0,0,30,32,3,6,3,0,31,23,1,0,0,0,31,29,1,0,0,0,32,5,1,0,0,0,33,
  	40,3,8,4,0,34,35,5,1,0,0,35,37,3,8,4,0,36,34,1,0,0,0,37,38,1,0,0,0,38,
  	36,1,0,0,0,38,39,1,0,0,0,39,41,1,0,0,0,40,36,1,0,0,0,40,41,1,0,0,0,41,
  	7,1,0,0,0,42,43,3,10,5,0,43,9,1,0,0,0,44,50,3,12,6,0,45,47,3,12,6,0,46,
  	45,1,0,0,0,47,48,1,0,0,0,48,46,1,0,0,0,48,49,1,0,0,0,49,51,1,0,0,0,50,
  	46,1,0,0,0,50,51,1,0,0,0,51,11,1,0,0,0,52,53,5,5,0,0,53,13,1,0,0,0,7,
  	17,26,31,38,40,48,50
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
    setState(15); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(14);
      stmt();
      setState(17); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == fusionParser::IDENTIFIER);
    setState(19);
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
    setState(21);
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
  enterRule(_localctx, 4, fusionParser::RuleFunc_call);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(31);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(23);
      match(fusionParser::IDENTIFIER);
      setState(24);
      match(fusionParser::LOBRACE);
      setState(26);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fusionParser::STRING) {
        setState(25);
        params();
      }
      setState(28);
      match(fusionParser::ROBRACE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(29);
      match(fusionParser::IDENTIFIER);
      setState(30);
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
  enterRule(_localctx, 6, fusionParser::RuleParams);
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
    setState(33);
    param();
    setState(40);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == fusionParser::T__0) {
      setState(36); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(34);
        match(fusionParser::T__0);
        setState(35);
        param();
        setState(38); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == fusionParser::T__0);
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
  enterRule(_localctx, 8, fusionParser::RuleParam);

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
  enterRule(_localctx, 10, fusionParser::RuleTypeobjects);
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
    setState(44);
    typeobject();
    setState(50);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == fusionParser::STRING) {
      setState(46); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(45);
        typeobject();
        setState(48); 
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
  enterRule(_localctx, 12, fusionParser::RuleTypeobject);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(52);
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
