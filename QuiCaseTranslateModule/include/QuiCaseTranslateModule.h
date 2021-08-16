#ifndef QuiCaseTranslateModule_h__
#define QuiCaseTranslateModule_h__


#include "IQuiCaseTranslateModule.h"
#include <QtWidgets/QWidget>
#include "PublicMarco.h"
namespace Ui
{
	class QuiCaseTranslateModuleClass;
}
class CQuiCaseTranslateModule : public QWidget,public IQuiCaseTranslateModule
{
    Q_OBJECT

public:
    CQuiCaseTranslateModule(QWidget *parent = Q_NULLPTR);
	~CQuiCaseTranslateModule();
public:
	/**
	* @fn       GetName
	* @author   Crack
	* @brief    获取模块名称
	* @date     2021/4/11 22:10
	* @param
	* @return
	*/
    virtual std::string GetName() const;
	/**
	 * @fn       GetCompany
	 * @author   Crack
	 * @brief    获取公司名称
	 * @date     2021/7/29 9:57
	 * @param
	 * @return
	*/
	virtual std::string GetCompany() const;
	/**
	 * @fn       GetVersion
	 * @author   Crack
	 * @brief     获取版本号
	 * @date     2021/7/29 9:57
	 * @param
	 * @return
	*/
	virtual std::string GetVersion() const;
	/**
	 * @fn       GetDescription
	 * @author   Crack
	 * @brief    描述信息
	 * @date     2021/7/29 9:58
	 * @param
	 * @return
	*/
	virtual std::string GetDescription() const;
	/**
	 * @fn       Initialise
	 * @author   Crack
	 * @brief    初始化
	 * @date     2021/7/29 9:58
	 * @param
	 * @return
	*/
	virtual bool Initialise();
	/**
	 * @fn       Uninitialise
	 * @author   Crack
	 * @brief    卸载信息
	 * @date     2021/7/29 9:59
	 * @param
	 * @return
	*/
	virtual bool Uninitialise();
private:
    Ui::QuiCaseTranslateModuleClass *ui;
};
DECLARE_MODULE(QuiCaseTranslate, extern)
#endif // QuiCaseTranslateModule_h__