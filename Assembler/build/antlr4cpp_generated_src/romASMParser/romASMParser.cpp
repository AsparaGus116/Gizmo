
// Generated from romASMParser.g4 by ANTLR 4.13.2



#include "romASMParser.h"


using namespace antlrcpp;
using namespace romASM;

using namespace antlr4;

namespace {

struct RomASMParserStaticData final {
  RomASMParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  RomASMParserStaticData(const RomASMParserStaticData&) = delete;
  RomASMParserStaticData(RomASMParserStaticData&&) = delete;
  RomASMParserStaticData& operator=(const RomASMParserStaticData&) = delete;
  RomASMParserStaticData& operator=(RomASMParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag romasmparserParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<RomASMParserStaticData> romasmparserParserStaticData = nullptr;

void romasmparserParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (romasmparserParserStaticData != nullptr) {
    return;
  }
#else
  assert(romasmparserParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<RomASMParserStaticData>(
    std::vector<std::string>{
      "program", "expr"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "','"
    },
    std::vector<std::string>{
      "", "MOV", "STR", "LDA", "OR", "INV", "AND", "XOR", "ADD", "SUB", 
      "NOT", "SHR", "SHL", "PUSH", "CALL", "POP", "RET", "JMP", "JEZ", "JNZ", 
      "JGZ", "JLZ", "COMMA", "COMMENT", "IMM", "HEX", "REG", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,27,171,2,0,7,0,2,1,7,1,1,0,5,0,6,8,0,10,0,12,0,9,9,0,1,0,1,0,1,1,
  	1,1,1,1,3,1,16,8,1,1,1,1,1,1,1,1,1,3,1,22,8,1,1,1,1,1,1,1,1,1,3,1,28,
  	8,1,1,1,1,1,1,1,1,1,3,1,34,8,1,1,1,1,1,1,1,1,1,3,1,40,8,1,1,1,1,1,1,1,
  	1,1,3,1,46,8,1,1,1,1,1,3,1,50,8,1,1,1,3,1,53,8,1,1,1,1,1,1,1,3,1,58,8,
  	1,1,1,3,1,61,8,1,1,1,1,1,1,1,3,1,66,8,1,1,1,1,1,3,1,70,8,1,1,1,3,1,73,
  	8,1,1,1,1,1,1,1,3,1,78,8,1,1,1,1,1,3,1,82,8,1,1,1,3,1,85,8,1,1,1,1,1,
  	1,1,3,1,90,8,1,1,1,1,1,3,1,94,8,1,1,1,3,1,97,8,1,1,1,1,1,1,1,3,1,102,
  	8,1,1,1,1,1,3,1,106,8,1,1,1,3,1,109,8,1,1,1,1,1,1,1,3,1,114,8,1,1,1,3,
  	1,117,8,1,1,1,1,1,1,1,3,1,122,8,1,1,1,3,1,125,8,1,1,1,1,1,1,1,3,1,130,
  	8,1,1,1,3,1,133,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,
  	1,147,8,1,1,1,1,1,1,1,1,1,3,1,153,8,1,1,1,1,1,1,1,1,1,3,1,159,8,1,1,1,
  	1,1,1,1,1,1,3,1,165,8,1,1,1,1,1,3,1,169,8,1,1,1,0,0,2,0,2,0,0,224,0,7,
  	1,0,0,0,2,168,1,0,0,0,4,6,3,2,1,0,5,4,1,0,0,0,6,9,1,0,0,0,7,5,1,0,0,0,
  	7,8,1,0,0,0,8,10,1,0,0,0,9,7,1,0,0,0,10,11,5,0,0,1,11,1,1,0,0,0,12,13,
  	5,1,0,0,13,15,5,26,0,0,14,16,5,22,0,0,15,14,1,0,0,0,15,16,1,0,0,0,16,
  	17,1,0,0,0,17,169,5,26,0,0,18,19,5,1,0,0,19,21,5,24,0,0,20,22,5,22,0,
  	0,21,20,1,0,0,0,21,22,1,0,0,0,22,23,1,0,0,0,23,169,5,26,0,0,24,25,5,1,
  	0,0,25,27,5,25,0,0,26,28,5,22,0,0,27,26,1,0,0,0,27,28,1,0,0,0,28,29,1,
  	0,0,0,29,169,5,26,0,0,30,31,5,2,0,0,31,33,5,26,0,0,32,34,5,22,0,0,33,
  	32,1,0,0,0,33,34,1,0,0,0,34,35,1,0,0,0,35,169,5,26,0,0,36,37,5,3,0,0,
  	37,39,5,26,0,0,38,40,5,22,0,0,39,38,1,0,0,0,39,40,1,0,0,0,40,41,1,0,0,
  	0,41,169,5,26,0,0,42,43,5,4,0,0,43,45,5,26,0,0,44,46,5,22,0,0,45,44,1,
  	0,0,0,45,46,1,0,0,0,46,47,1,0,0,0,47,52,5,26,0,0,48,50,5,22,0,0,49,48,
  	1,0,0,0,49,50,1,0,0,0,50,51,1,0,0,0,51,53,5,26,0,0,52,49,1,0,0,0,52,53,
  	1,0,0,0,53,169,1,0,0,0,54,55,5,5,0,0,55,60,5,26,0,0,56,58,5,22,0,0,57,
  	56,1,0,0,0,57,58,1,0,0,0,58,59,1,0,0,0,59,61,5,26,0,0,60,57,1,0,0,0,60,
  	61,1,0,0,0,61,169,1,0,0,0,62,63,5,6,0,0,63,65,5,26,0,0,64,66,5,22,0,0,
  	65,64,1,0,0,0,65,66,1,0,0,0,66,67,1,0,0,0,67,72,5,26,0,0,68,70,5,22,0,
  	0,69,68,1,0,0,0,69,70,1,0,0,0,70,71,1,0,0,0,71,73,5,26,0,0,72,69,1,0,
  	0,0,72,73,1,0,0,0,73,169,1,0,0,0,74,75,5,7,0,0,75,77,5,26,0,0,76,78,5,
  	22,0,0,77,76,1,0,0,0,77,78,1,0,0,0,78,79,1,0,0,0,79,84,5,26,0,0,80,82,
  	5,22,0,0,81,80,1,0,0,0,81,82,1,0,0,0,82,83,1,0,0,0,83,85,5,26,0,0,84,
  	81,1,0,0,0,84,85,1,0,0,0,85,169,1,0,0,0,86,87,5,8,0,0,87,89,5,26,0,0,
  	88,90,5,22,0,0,89,88,1,0,0,0,89,90,1,0,0,0,90,91,1,0,0,0,91,96,5,26,0,
  	0,92,94,5,22,0,0,93,92,1,0,0,0,93,94,1,0,0,0,94,95,1,0,0,0,95,97,5,26,
  	0,0,96,93,1,0,0,0,96,97,1,0,0,0,97,169,1,0,0,0,98,99,5,9,0,0,99,101,5,
  	26,0,0,100,102,5,22,0,0,101,100,1,0,0,0,101,102,1,0,0,0,102,103,1,0,0,
  	0,103,108,5,26,0,0,104,106,5,22,0,0,105,104,1,0,0,0,105,106,1,0,0,0,106,
  	107,1,0,0,0,107,109,5,26,0,0,108,105,1,0,0,0,108,109,1,0,0,0,109,169,
  	1,0,0,0,110,111,5,10,0,0,111,116,5,26,0,0,112,114,5,22,0,0,113,112,1,
  	0,0,0,113,114,1,0,0,0,114,115,1,0,0,0,115,117,5,26,0,0,116,113,1,0,0,
  	0,116,117,1,0,0,0,117,169,1,0,0,0,118,119,5,11,0,0,119,124,5,26,0,0,120,
  	122,5,22,0,0,121,120,1,0,0,0,121,122,1,0,0,0,122,123,1,0,0,0,123,125,
  	5,26,0,0,124,121,1,0,0,0,124,125,1,0,0,0,125,169,1,0,0,0,126,127,5,12,
  	0,0,127,132,5,26,0,0,128,130,5,22,0,0,129,128,1,0,0,0,129,130,1,0,0,0,
  	130,131,1,0,0,0,131,133,5,26,0,0,132,129,1,0,0,0,132,133,1,0,0,0,133,
  	169,1,0,0,0,134,135,5,13,0,0,135,169,5,26,0,0,136,137,5,14,0,0,137,169,
  	5,26,0,0,138,139,5,15,0,0,139,169,5,26,0,0,140,169,5,16,0,0,141,142,5,
  	17,0,0,142,169,5,26,0,0,143,144,5,18,0,0,144,146,5,26,0,0,145,147,5,22,
  	0,0,146,145,1,0,0,0,146,147,1,0,0,0,147,148,1,0,0,0,148,169,5,26,0,0,
  	149,150,5,19,0,0,150,152,5,26,0,0,151,153,5,22,0,0,152,151,1,0,0,0,152,
  	153,1,0,0,0,153,154,1,0,0,0,154,169,5,26,0,0,155,156,5,20,0,0,156,158,
  	5,26,0,0,157,159,5,22,0,0,158,157,1,0,0,0,158,159,1,0,0,0,159,160,1,0,
  	0,0,160,169,5,26,0,0,161,162,5,21,0,0,162,164,5,26,0,0,163,165,5,22,0,
  	0,164,163,1,0,0,0,164,165,1,0,0,0,165,166,1,0,0,0,166,169,5,26,0,0,167,
  	169,5,23,0,0,168,12,1,0,0,0,168,18,1,0,0,0,168,24,1,0,0,0,168,30,1,0,
  	0,0,168,36,1,0,0,0,168,42,1,0,0,0,168,54,1,0,0,0,168,62,1,0,0,0,168,74,
  	1,0,0,0,168,86,1,0,0,0,168,98,1,0,0,0,168,110,1,0,0,0,168,118,1,0,0,0,
  	168,126,1,0,0,0,168,134,1,0,0,0,168,136,1,0,0,0,168,138,1,0,0,0,168,140,
  	1,0,0,0,168,141,1,0,0,0,168,143,1,0,0,0,168,149,1,0,0,0,168,155,1,0,0,
  	0,168,161,1,0,0,0,168,167,1,0,0,0,169,3,1,0,0,0,34,7,15,21,27,33,39,45,
  	49,52,57,60,65,69,72,77,81,84,89,93,96,101,105,108,113,116,121,124,129,
  	132,146,152,158,164,168
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  romasmparserParserStaticData = std::move(staticData);
}

}

romASMParser::romASMParser(TokenStream *input) : romASMParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

romASMParser::romASMParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  romASMParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *romasmparserParserStaticData->atn, romasmparserParserStaticData->decisionToDFA, romasmparserParserStaticData->sharedContextCache, options);
}

romASMParser::~romASMParser() {
  delete _interpreter;
}

const atn::ATN& romASMParser::getATN() const {
  return *romasmparserParserStaticData->atn;
}

std::string romASMParser::getGrammarFileName() const {
  return "romASMParser.g4";
}

const std::vector<std::string>& romASMParser::getRuleNames() const {
  return romasmparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& romASMParser::getVocabulary() const {
  return romasmparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView romASMParser::getSerializedATN() const {
  return romasmparserParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

romASMParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* romASMParser::ProgramContext::EOF() {
  return getToken(romASMParser::EOF, 0);
}

std::vector<romASMParser::ExprContext *> romASMParser::ProgramContext::expr() {
  return getRuleContexts<romASMParser::ExprContext>();
}

romASMParser::ExprContext* romASMParser::ProgramContext::expr(size_t i) {
  return getRuleContext<romASMParser::ExprContext>(i);
}


size_t romASMParser::ProgramContext::getRuleIndex() const {
  return romASMParser::RuleProgram;
}


romASMParser::ProgramContext* romASMParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, romASMParser::RuleProgram);
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
    setState(7);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 12582910) != 0)) {
      setState(4);
      expr();
      setState(9);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(10);
    match(romASMParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

romASMParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* romASMParser::ExprContext::MOV() {
  return getToken(romASMParser::MOV, 0);
}

std::vector<tree::TerminalNode *> romASMParser::ExprContext::REG() {
  return getTokens(romASMParser::REG);
}

tree::TerminalNode* romASMParser::ExprContext::REG(size_t i) {
  return getToken(romASMParser::REG, i);
}

std::vector<tree::TerminalNode *> romASMParser::ExprContext::COMMA() {
  return getTokens(romASMParser::COMMA);
}

tree::TerminalNode* romASMParser::ExprContext::COMMA(size_t i) {
  return getToken(romASMParser::COMMA, i);
}

tree::TerminalNode* romASMParser::ExprContext::IMM() {
  return getToken(romASMParser::IMM, 0);
}

tree::TerminalNode* romASMParser::ExprContext::HEX() {
  return getToken(romASMParser::HEX, 0);
}

tree::TerminalNode* romASMParser::ExprContext::STR() {
  return getToken(romASMParser::STR, 0);
}

tree::TerminalNode* romASMParser::ExprContext::LDA() {
  return getToken(romASMParser::LDA, 0);
}

tree::TerminalNode* romASMParser::ExprContext::OR() {
  return getToken(romASMParser::OR, 0);
}

tree::TerminalNode* romASMParser::ExprContext::INV() {
  return getToken(romASMParser::INV, 0);
}

tree::TerminalNode* romASMParser::ExprContext::AND() {
  return getToken(romASMParser::AND, 0);
}

tree::TerminalNode* romASMParser::ExprContext::XOR() {
  return getToken(romASMParser::XOR, 0);
}

tree::TerminalNode* romASMParser::ExprContext::ADD() {
  return getToken(romASMParser::ADD, 0);
}

tree::TerminalNode* romASMParser::ExprContext::SUB() {
  return getToken(romASMParser::SUB, 0);
}

tree::TerminalNode* romASMParser::ExprContext::NOT() {
  return getToken(romASMParser::NOT, 0);
}

tree::TerminalNode* romASMParser::ExprContext::SHR() {
  return getToken(romASMParser::SHR, 0);
}

tree::TerminalNode* romASMParser::ExprContext::SHL() {
  return getToken(romASMParser::SHL, 0);
}

tree::TerminalNode* romASMParser::ExprContext::PUSH() {
  return getToken(romASMParser::PUSH, 0);
}

tree::TerminalNode* romASMParser::ExprContext::CALL() {
  return getToken(romASMParser::CALL, 0);
}

tree::TerminalNode* romASMParser::ExprContext::POP() {
  return getToken(romASMParser::POP, 0);
}

tree::TerminalNode* romASMParser::ExprContext::RET() {
  return getToken(romASMParser::RET, 0);
}

tree::TerminalNode* romASMParser::ExprContext::JMP() {
  return getToken(romASMParser::JMP, 0);
}

tree::TerminalNode* romASMParser::ExprContext::JEZ() {
  return getToken(romASMParser::JEZ, 0);
}

tree::TerminalNode* romASMParser::ExprContext::JNZ() {
  return getToken(romASMParser::JNZ, 0);
}

tree::TerminalNode* romASMParser::ExprContext::JGZ() {
  return getToken(romASMParser::JGZ, 0);
}

tree::TerminalNode* romASMParser::ExprContext::JLZ() {
  return getToken(romASMParser::JLZ, 0);
}

tree::TerminalNode* romASMParser::ExprContext::COMMENT() {
  return getToken(romASMParser::COMMENT, 0);
}


size_t romASMParser::ExprContext::getRuleIndex() const {
  return romASMParser::RuleExpr;
}


romASMParser::ExprContext* romASMParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 2, romASMParser::RuleExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(168);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(12);
      match(romASMParser::MOV);
      setState(13);
      match(romASMParser::REG);
      setState(15);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA) {
        setState(14);
        match(romASMParser::COMMA);
      }
      setState(17);
      match(romASMParser::REG);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(18);
      match(romASMParser::MOV);
      setState(19);
      match(romASMParser::IMM);
      setState(21);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA) {
        setState(20);
        match(romASMParser::COMMA);
      }
      setState(23);
      match(romASMParser::REG);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(24);
      match(romASMParser::MOV);
      setState(25);
      match(romASMParser::HEX);
      setState(27);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA) {
        setState(26);
        match(romASMParser::COMMA);
      }
      setState(29);
      match(romASMParser::REG);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(30);
      match(romASMParser::STR);
      setState(31);
      match(romASMParser::REG);
      setState(33);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA) {
        setState(32);
        match(romASMParser::COMMA);
      }
      setState(35);
      match(romASMParser::REG);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(36);
      match(romASMParser::LDA);
      setState(37);
      match(romASMParser::REG);
      setState(39);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA) {
        setState(38);
        match(romASMParser::COMMA);
      }
      setState(41);
      match(romASMParser::REG);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(42);
      match(romASMParser::OR);
      setState(43);
      match(romASMParser::REG);
      setState(45);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA) {
        setState(44);
        match(romASMParser::COMMA);
      }
      setState(47);
      match(romASMParser::REG);
      setState(52);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA

      || _la == romASMParser::REG) {
        setState(49);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == romASMParser::COMMA) {
          setState(48);
          match(romASMParser::COMMA);
        }
        setState(51);
        match(romASMParser::REG);
      }
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(54);
      match(romASMParser::INV);
      setState(55);
      match(romASMParser::REG);
      setState(60);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA

      || _la == romASMParser::REG) {
        setState(57);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == romASMParser::COMMA) {
          setState(56);
          match(romASMParser::COMMA);
        }
        setState(59);
        match(romASMParser::REG);
      }
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(62);
      match(romASMParser::AND);
      setState(63);
      match(romASMParser::REG);
      setState(65);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA) {
        setState(64);
        match(romASMParser::COMMA);
      }
      setState(67);
      match(romASMParser::REG);
      setState(72);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA

      || _la == romASMParser::REG) {
        setState(69);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == romASMParser::COMMA) {
          setState(68);
          match(romASMParser::COMMA);
        }
        setState(71);
        match(romASMParser::REG);
      }
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(74);
      match(romASMParser::XOR);
      setState(75);
      match(romASMParser::REG);
      setState(77);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA) {
        setState(76);
        match(romASMParser::COMMA);
      }
      setState(79);
      match(romASMParser::REG);
      setState(84);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA

      || _la == romASMParser::REG) {
        setState(81);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == romASMParser::COMMA) {
          setState(80);
          match(romASMParser::COMMA);
        }
        setState(83);
        match(romASMParser::REG);
      }
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(86);
      match(romASMParser::ADD);
      setState(87);
      match(romASMParser::REG);
      setState(89);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA) {
        setState(88);
        match(romASMParser::COMMA);
      }
      setState(91);
      match(romASMParser::REG);
      setState(96);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA

      || _la == romASMParser::REG) {
        setState(93);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == romASMParser::COMMA) {
          setState(92);
          match(romASMParser::COMMA);
        }
        setState(95);
        match(romASMParser::REG);
      }
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(98);
      match(romASMParser::SUB);
      setState(99);
      match(romASMParser::REG);
      setState(101);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA) {
        setState(100);
        match(romASMParser::COMMA);
      }
      setState(103);
      match(romASMParser::REG);
      setState(108);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA

      || _la == romASMParser::REG) {
        setState(105);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == romASMParser::COMMA) {
          setState(104);
          match(romASMParser::COMMA);
        }
        setState(107);
        match(romASMParser::REG);
      }
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(110);
      match(romASMParser::NOT);
      setState(111);
      match(romASMParser::REG);
      setState(116);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA

      || _la == romASMParser::REG) {
        setState(113);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == romASMParser::COMMA) {
          setState(112);
          match(romASMParser::COMMA);
        }
        setState(115);
        match(romASMParser::REG);
      }
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(118);
      match(romASMParser::SHR);
      setState(119);
      match(romASMParser::REG);
      setState(124);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA

      || _la == romASMParser::REG) {
        setState(121);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == romASMParser::COMMA) {
          setState(120);
          match(romASMParser::COMMA);
        }
        setState(123);
        match(romASMParser::REG);
      }
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(126);
      match(romASMParser::SHL);
      setState(127);
      match(romASMParser::REG);
      setState(132);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA

      || _la == romASMParser::REG) {
        setState(129);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == romASMParser::COMMA) {
          setState(128);
          match(romASMParser::COMMA);
        }
        setState(131);
        match(romASMParser::REG);
      }
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(134);
      match(romASMParser::PUSH);
      setState(135);
      match(romASMParser::REG);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(136);
      match(romASMParser::CALL);
      setState(137);
      match(romASMParser::REG);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(138);
      match(romASMParser::POP);
      setState(139);
      match(romASMParser::REG);
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(140);
      match(romASMParser::RET);
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(141);
      match(romASMParser::JMP);
      setState(142);
      match(romASMParser::REG);
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(143);
      match(romASMParser::JEZ);
      setState(144);
      match(romASMParser::REG);
      setState(146);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA) {
        setState(145);
        match(romASMParser::COMMA);
      }
      setState(148);
      match(romASMParser::REG);
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(149);
      match(romASMParser::JNZ);
      setState(150);
      match(romASMParser::REG);
      setState(152);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA) {
        setState(151);
        match(romASMParser::COMMA);
      }
      setState(154);
      match(romASMParser::REG);
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(155);
      match(romASMParser::JGZ);
      setState(156);
      match(romASMParser::REG);
      setState(158);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA) {
        setState(157);
        match(romASMParser::COMMA);
      }
      setState(160);
      match(romASMParser::REG);
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(161);
      match(romASMParser::JLZ);
      setState(162);
      match(romASMParser::REG);
      setState(164);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == romASMParser::COMMA) {
        setState(163);
        match(romASMParser::COMMA);
      }
      setState(166);
      match(romASMParser::REG);
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(167);
      match(romASMParser::COMMENT);
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

void romASMParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  romasmparserParserInitialize();
#else
  ::antlr4::internal::call_once(romasmparserParserOnceFlag, romasmparserParserInitialize);
#endif
}
