#include "QuiCaseTranslateModule.h"
#include "ui_QuiCaseTranslateModule.h"

CQuiCaseTranslateModule::CQuiCaseTranslateModule(QWidget *parent)
    : QWidget(parent)
	,ui(new Ui::QuiCaseTranslateModule)
{
    ui->setupUi(this);
}
CQuiCaseTranslateModule::~CQuiCaseTranslateModule()
{
	
}
std::string CQuiCaseTranslateModule::GetName() const
{
	return "";
}

std::string CQuiCaseTranslateModule::GetCompany() const
{
	return "";
}

std::string CQuiCaseTranslateModule::GetVersion() const
{
	return "";
}

std::string CQuiCaseTranslateModule::GetDescription() const
{
	return "";
}

bool CQuiCaseTranslateModule::Initialise()
{
	return true;
}

bool CQuiCaseTranslateModule::Uninitialise()
{
	return true;
}
IMPLEMENT_MODULE(QuiCaseTranslate)
