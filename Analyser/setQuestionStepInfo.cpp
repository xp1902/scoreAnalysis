// setQuestionStepInfo.h : CSetQuestionStepInfo 类的实现



// CSetQuestionStepInfo 实现

// 代码生成在 2005年8月31日, 18:53

#include "stdafx.h"
#include "setQuestionStepInfo.h"
IMPLEMENT_DYNAMIC(CSetQuestionStepInfo, CRecordset)

CSetQuestionStepInfo::CSetQuestionStepInfo(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_QuestionStepID = 0;
	m_QuestionID = 0;
	m_QuestionStepName = "";
	m_QuestionStepScore = 0;
	m_Step = 0;
	m_nFields = 5;
	m_nDefaultType = snapshot;
}
//#error Security Issue: The connection string may contain a password
//// 此连接字符串中可能包含密码
//// 下面的连接字符串中可能包含明文密码和/或
//// 其他重要信息。请在查看完
//// 此连接字符串并找到所有与安全有关的问题后移除 #error。可能需要
//// 将此密码存储为其他格式或使用其他的用户身份验证。
//CString CSetQuestionStepInfo::GetDefaultConnect()
//{
//	return _T("DSN=eTest;APP=Microsoft\x00ae Visual Studio .NET;WSID=SKY;DATABASE=eTest;LANGUAGE=\x7b80\x4f53\x4e2d\x6587;Trusted_Connection=Yes");
//}

CString CSetQuestionStepInfo::GetDefaultSQL()
{
	return _T("[dbo].[QuestionStepInfo]");
}

void CSetQuestionStepInfo::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() 和 RFX_Int() 这类宏依赖的是
// 成员变量的类型，而不是数据库字段的类型。
// ODBC 尝试自动将列值转换为所请求的类型
	RFX_Long(pFX, _T("[QuestionStepID]"), m_QuestionStepID);
	RFX_Long(pFX, _T("[QuestionID]"), m_QuestionID);
	RFX_Text(pFX, _T("[QuestionStepName]"), m_QuestionStepName);
	RFX_Byte(pFX, _T("[QuestionStepScore]"), m_QuestionStepScore);
	RFX_Byte(pFX, _T("[Step]"), m_Step);

}
/////////////////////////////////////////////////////////////////////////////
// CSetQuestionStepInfo 诊断

#ifdef _DEBUG
void CSetQuestionStepInfo::AssertValid() const
{
	CRecordset::AssertValid();
}

void CSetQuestionStepInfo::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG


