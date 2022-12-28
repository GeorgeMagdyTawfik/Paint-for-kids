#include "SwitchToPlayMode.h"
#include "../ApplicationManager.h"
#include "../GUI/Output.h"

SwitchToPlayMode::SwitchToPlayMode(ApplicationManager* pApp) : Action(pApp)
{}

void SwitchToPlayMode::ReadActionParameters()
{}

void SwitchToPlayMode::Execute(bool ReadParamsFirst)
{
	Output* pOut = pManager->GetOutput();
	pOut->CreatePlayToolBar();
	pOut->ClearStatusBar();
}

void SwitchToPlayMode::UndoExcute()
{}
void SwitchToPlayMode::RedoExcute()
{}

bool SwitchToPlayMode::CheckRecordability() const
{
	return false;
}