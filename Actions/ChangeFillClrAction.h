#pragma once
#include "Action.h"
class ChangeFillClrAction : public Action
{
	color NewFill;
	bool chosen;
	CFigure* pFig;
	CFigure* saved;
	color prevFigFill;
	color prevUIFill;
	bool figwasfilled;
	bool defaultwasfilled;
	color newcolor;

public:
	ChangeFillClrAction(ApplicationManager* pApp);
	virtual void ReadActionParameters() override;
	virtual void Execute(bool ReadParamsFirst = true) override;
	virtual void UndoExcute() override;
	virtual void RedoExcute() override;
	~ChangeFillClrAction();

	virtual bool CheckRecordability() const;
};

