#ifndef COMPOSITE_CONCRETE_
#define COMPOSITE_CONCRETE_
#include "Composite.h"

class CExpression;
class CExpressionIdentifier;

class CCompileUnit : public CSTNode {
public:
	CCompileUnit(CSTNode* arg1, CSTNode* arg2);
	CCompileUnit(CSTNode* arg1);
	virtual ~CCompileUnit(){}
	virtual void PrintSyntaxTree(ofstream* dotfile,CSTNode *parent) override;
};

class CFunctionDefinition: public CSTNode {
public:
	CFunctionDefinition(CSTNode* id, CSTNode* fargs, CSTNode* compoundst);
	CFunctionDefinition(CSTNode* id, CSTNode* compoundst);
	virtual ~CFunctionDefinition(){}
	virtual void PrintSyntaxTree(ofstream* dotfile,CSTNode *parent) override;
	double Evaluate(CSTNode* parent) override;
};

class CFormalArgs : public CSTNode {
public:
	CFormalArgs(CSTNode* fargs, CSTNode* id);
	CFormalArgs(CSTNode* id);
	CFormalArgs();
	virtual ~CFormalArgs(){}
	virtual void PrintSyntaxTree(ofstream* dotfile,CSTNode *parent) override;
	
};

class CActualArgs : public CSTNode {
public:
		
	CActualArgs(CSTNode* actargs, CSTNode* expr);
	CActualArgs(CSTNode* expr);
	virtual ~CActualArgs(){}
	virtual void PrintSyntaxTree(ofstream* dotfile,CSTNode *parent) override;
};

class CStatement : public CSTNode {
protected:
	CStatement(NodeType tp, int children);
	CStatement(NodeType tp, int children, CSTNode* arg);
	CStatement(NodeType tp, int children, CSTNode* arg1, CSTNode* arg2);
	CStatement(NodeType tp, int children, CSTNode* arg1,CSTNode *arg2, CSTNode *arg3);
	CStatement(NodeType tp, int children, CSTNode* arg1, CSTNode* arg2, CSTNode* arg3 , CSTNode* arg4);
	CStatement(NodeType tp);
	virtual ~CStatement(){}
};
class CExpressionArray : public CSTNode
{
public:
	string m_text;
	CExpressionArray(CSTNode* id, CSTNode* num_of_elem);
	virtual ~CExpressionArray() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
	double Evaluate(CSTNode* parent) override;
};
class CArrayReference : public CSTNode
{
public:
	CArrayReference(CSTNode* var_id,CSTNode* array_id, CSTNode* num_of_elem);
	CArrayReference(CSTNode* var_id,CSTNode* array_id, CSTNode* num_of_elem,CSTNode* num_of_elem2);
	virtual ~CArrayReference() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
};
class CArray : public CSTNode
{
public:
	CArray(CSTNode* array);
	virtual ~CArray() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;

};
class CElems : public CSTNode
{

public:
	list<CExpression*>* elem = nullptr;
	CElems(CSTNode* elem);
	CElems(CSTNode* elems, CSTNode* elem);
	virtual ~CElems() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
	double Evaluate(CSTNode* parent) override;
};
class CElem : public CSTNode
{
public:
	CElem(CSTNode* elem);
	virtual ~CElem() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
};
class CExpressionStatement : public CStatement {
public:
	CExpressionStatement(CSTNode* arg);
	virtual ~CExpressionStatement() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
	double Evaluate(CSTNode* parent) override;
};
class CCompoundStatement : public CStatement {
public:	
	CCompoundStatement(CSTNode* arg = nullptr);
	virtual ~CCompoundStatement(){}
	virtual void PrintSyntaxTree(ofstream* dotfile,CSTNode *parent) override;
	
};

class CSelectionStatement : public CStatement {
public:
	CSelectionStatement(CSTNode* arg);
	virtual ~CSelectionStatement() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;

};

class CIfStatement : public CStatement {
public:
	CIfStatement(CSTNode* cond, CSTNode* ifpath, CSTNode* elsepath);
	CIfStatement(CSTNode* cond, CSTNode* ifpath);
	virtual ~CIfStatement(){}
	virtual void PrintSyntaxTree(ofstream* dotfile,CSTNode *parent) override;
	double Evaluate(CSTNode* parent) override;
};
class CSwitchStatement : public CSTNode {
public:
	CSwitchStatement(CSTNode* expr, CSTNode* case_options);
	CSwitchStatement(CSTNode* expr, CSTNode* case_options,CSTNode* default_option);
	virtual ~CSwitchStatement() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
	double Evaluate(CSTNode* parent) override;
};
class CCaseOptions : public CSTNode {
public:
	CCaseOptions(CSTNode* case_num);
	CCaseOptions(CSTNode* case_num, CSTNode* statements);
	CCaseOptions(CSTNode* case_options,CSTNode* case_num, CSTNode* statements);
	virtual ~CCaseOptions() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
	double Evaluate(CSTNode* parent) override;
};
class CDefaultOption : public CSTNode {
public:
	CDefaultOption(CSTNode* statements);
	virtual ~CDefaultOption() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
	double Evaluate(CSTNode* parent) override;
};

class CWhileStatement : public CStatement {
public:	
	CWhileStatement(CSTNode* cond, CSTNode* body);
	virtual ~CWhileStatement(){}
	virtual void PrintSyntaxTree(ofstream* dotfile,CSTNode *parent) override;
	double Evaluate(CSTNode* parent) override;
};

class CDoWhileStatement : public CStatement {
public:
	CDoWhileStatement(CSTNode* body, CSTNode* cond);
	virtual ~CDoWhileStatement() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
	double Evaluate(CSTNode* parent) override;
};

class CForStatement : public CStatement {
public:
	CForStatement(CSTNode* body);
	CForStatement(CSTNode* expr2, CSTNode* expr3, CSTNode* body);
	CForStatement(CSTNode* expr1, CSTNode* expr2, CSTNode* expr3, CSTNode* body);
	virtual ~CForStatement() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
	double Evaluate(CSTNode* parent) override;
};

class CReturnStatement : public CStatement {
public:
	CFunctionDefinition* m_hostFunction;
	CReturnStatement(CSTNode* expr);
	virtual ~CReturnStatement(){}
	virtual void PrintSyntaxTree(ofstream* dotfile,CSTNode *parent) override;
	double Evaluate(CSTNode* parent) override;
};

class CBreakStatement : public CStatement {
public:
	CBreakStatement();
	virtual ~CBreakStatement(){}
	virtual void PrintSyntaxTree(ofstream* dotfile,CSTNode *parent) override;
	double Evaluate(CSTNode* parent) override;
};

class CNullStatement : public CStatement {
public:
	CNullStatement();
	virtual ~CNullStatement(){}
	virtual void PrintSyntaxTree(ofstream* dotfile,CSTNode *parent) override;
	
};

class CStatementList : public CSTNode {
public:
	CStatementList(CSTNode* arg1);
	CStatementList(CSTNode* arg1, CSTNode* arg2);
	virtual ~CStatementList(){}
	virtual void PrintSyntaxTree(ofstream* dotfile,CSTNode *parent) override;
	
};

class CExpression : public CSTNode {
public:
	CExpression(NodeType tp, int children, CSTNode* arg1, CSTNode* arg2);
	CExpression(NodeType tp, int children, CSTNode* arg1);
	CExpression(NodeType tp);
	virtual ~CExpression() {}	
};

class CExpressionNUMBER : public CExpression {	
public:
	double m_value;
	string m_text;
	
	CExpressionNUMBER(const char *text, double value);
	virtual ~CExpressionNUMBER(){}
	virtual void PrintSyntaxTree(ofstream* dotfile,CSTNode *parent) override;
	double Evaluate(CSTNode* parent) override;
};

class CExpressionVariable : public CExpression {
public:
	string m_text;	
	CExpressionVariable(CSTNode *id);
	virtual ~CExpressionVariable(){}
	virtual void PrintSyntaxTree(ofstream* dotfile,CSTNode *parent) override;
	double Evaluate(CSTNode* parent) override;
};

class CIDENTIFIER : public CSTNode {
public:
	string m_text;
	CIDENTIFIER(const char* text);
	virtual ~CIDENTIFIER();
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
	double Evaluate(CSTNode* parent) override;
};

class CExpressionFCall : public CExpression {
public:
	list<CExpression*>* m_actualArguments = nullptr;
	list<CIDENTIFIER*>* m_formalArguments = nullptr;
	CExpressionFCall(CSTNode* id, CSTNode* actual);
	CExpressionFCall(CSTNode* id);
	virtual ~CExpressionFCall(){}
	virtual void PrintSyntaxTree(ofstream* dotfile,CSTNode *parent) override;
	double Evaluate(CSTNode* parent) override;
	double GetActualArgument(int index);
	void MapActualToFormalArguments();	
};

class CExpressionAdd : public CExpression {
public:
	CExpressionAdd(CSTNode* arg1, CSTNode* arg2);
	virtual ~CExpressionAdd(){}
	virtual void PrintSyntaxTree(ofstream* dotfile,CSTNode *parent) override;
	double Evaluate(CSTNode* parent) override;
};

class CExpressionMinus : public CExpression {
public:
	CExpressionMinus(CSTNode* arg1, CSTNode* arg2);
	virtual ~CExpressionMinus(){}
	virtual void PrintSyntaxTree(ofstream* dotfile,CSTNode *parent) override;
	double Evaluate(CSTNode* parent) override;
};

class CExpressionMult : public CExpression {
public:
	CExpressionMult(CSTNode* arg1, CSTNode* arg2);
	virtual ~CExpressionMult(){}
	virtual void PrintSyntaxTree(ofstream* dotfile,CSTNode *parent) override;
	double Evaluate(CSTNode* parent) override;
};

class CExpressionDiv : public CExpression {
public:
	CExpressionDiv(CSTNode* arg1, CSTNode* arg2);
	virtual ~CExpressionDiv(){}
	virtual void PrintSyntaxTree(ofstream* dotfile,CSTNode *parent) override;
	double Evaluate(CSTNode* parent) override;
};

class CExpressionUnaryPlus : public CExpression {
public:
	CExpressionUnaryPlus(CSTNode* arg1);
	virtual ~CExpressionUnaryPlus(){}
	virtual void PrintSyntaxTree(ofstream* dotfile,CSTNode *parent) override;
	double Evaluate(CSTNode* parent) override;
};

class CExpressionUnaryMinus : public CExpression {
public:
	CExpressionUnaryMinus(CSTNode* arg1);
	virtual ~CExpressionUnaryMinus(){}
	virtual void PrintSyntaxTree(ofstream* dotfile,CSTNode *parent) override;
	double Evaluate(CSTNode* parent) override;
};

class CExpressionPostFixPlus : public CExpression {
public:
	CExpressionPostFixPlus(CSTNode* arg1);
	virtual ~CExpressionPostFixPlus(){}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
	double Evaluate(CSTNode* parent) override;
};

class CExpressionPostFixMinus : public CExpression {
public:
	CExpressionPostFixMinus(CSTNode* arg1);
	virtual ~CExpressionPostFixMinus() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
	double Evaluate(CSTNode* parent) override;
};

class CExpressionAssign : public CExpression {
public:
	CExpressionAssign(CSTNode* id, CSTNode* expr);
	virtual ~CExpressionAssign(){}
	virtual void PrintSyntaxTree(ofstream* dotfile,CSTNode *parent) override;
	double Evaluate(CSTNode* parent) override;
};

class CExpressionAND : public CExpression {
public:
	CExpressionAND(CSTNode* arg1, CSTNode* arg2);
	virtual ~CExpressionAND(){}
	virtual void PrintSyntaxTree(ofstream* dotfile,CSTNode *parent) override;
	double Evaluate(CSTNode* parent) override;
};

class CExpressionOR : public CExpression {
public:
	CExpressionOR(CSTNode* arg1, CSTNode* arg2);
	virtual ~CExpressionOR(){}
	virtual void PrintSyntaxTree(ofstream* dotfile,CSTNode *parent) override;
	double Evaluate(CSTNode* parent) override;
};

class CExpressionNOT : public CExpression {
public:
	CExpressionNOT(CSTNode* expr);
	virtual ~CExpressionNOT(){}
	virtual void PrintSyntaxTree(ofstream* dotfile,CSTNode *parent) override;
	double Evaluate(CSTNode* parent) override;
};

class CExpressionGT : public CExpression {
public:
	CExpressionGT(CSTNode* arg1, CSTNode* arg2);
	virtual ~CExpressionGT(){}
	virtual void PrintSyntaxTree(ofstream* dotfile,CSTNode *parent) override;
	double Evaluate(CSTNode* parent) override;
};

class CExpressionGTE : public CExpression {
public:
	CExpressionGTE(CSTNode* arg1, CSTNode* arg2);
	virtual ~CExpressionGTE(){}
	virtual void PrintSyntaxTree(ofstream* dotfile,CSTNode *parent) override;
	double Evaluate(CSTNode* parent) override;
};

class CExpressionLT : public CExpression {
public:
	CExpressionLT(CSTNode* arg1, CSTNode* arg2);
	virtual ~CExpressionLT() {}
	virtual void PrintSyntaxTree(ofstream* dotfile,CSTNode *parent) override;
	double Evaluate(CSTNode* parent) override;
};

class CExpressionLTE : public CExpression {
public:
	CExpressionLTE(CSTNode* arg1, CSTNode* arg2);
	virtual ~CExpressionLTE() {}
	virtual void PrintSyntaxTree(ofstream* dotfile,CSTNode *parent) override;
	double Evaluate(CSTNode* parent) override;
};

class CExpressionEQUAL : public CExpression {
public:
	CExpressionEQUAL(CSTNode* arg1, CSTNode* arg2);
	virtual ~CExpressionEQUAL() {}
	virtual void PrintSyntaxTree(ofstream* dotfile,CSTNode *parent) override;
	double Evaluate(CSTNode* parent) override;
};

class CExpressionNEQUAL : public CExpression {
public:
	CExpressionNEQUAL(CSTNode* arg1, CSTNode* arg2);
	virtual ~CExpressionNEQUAL() {}
	virtual void PrintSyntaxTree(ofstream* dotfile,CSTNode *parent) override;
	double Evaluate(CSTNode* parent) override;
};
#endif