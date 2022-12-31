#include "movebydragging.h"

#include "..\ApplicationManager.h"

class Action;

movebydragging::movebydragging(ApplicationManager* pApp) : Action(pApp)
{
}

void movebydragging::ReadActionParameters()
{

}

void movebydragging::Execute(bool ReadParamsFirst)
{
	if (ReadParamsFirst)
		ReadActionParameters();
	Output* pOut = pManager->GetOutput();
	Input* pIn = pManager->GetInput();
	pFig = pManager->GetSelectedFig();

	if (pFig)
	{

		pOut->PrintMessage("Move By Dragging: drag the figure you want to move.");
		moved = pManager->GetSelectedFig();
		while (pIn->GetButton(newlocation.x, newlocation.y) == BUTTON_UP)
		{
		}
		while (pIn->GetButton(newlocation.x, newlocation.y) == BUTTON_DOWN)
		{
			
			moved->Move(newlocation);
			Sleep(2);
			pOut->PrintMessage("The figure is moving!");
			
			pManager->UpdateInterface();
		}

	}
	else
		pOut->PrintMessage("No selected figure. Please select a figure first!");
	
	//pOut->CreateDrawToolBar();
	pOut->PrintMessage("The figure has been moved");
}

void movebydragging::UndoExcute()
{


}

void movebydragging::RedoExcute()
{

}

movebydragging::~movebydragging()
{
}

bool movebydragging::CheckRecordability() const
{
	return true;
}