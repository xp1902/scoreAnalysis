// viewAVGRegionStep.h : CViewAVGRegionStep 类的实现



// CViewAVGRegionStep 实现

// 代码生成在 2005年9月2日, 10:01

#include "stdafx.h"
#include "viewAVGRegionStep.h"
IMPLEMENT_DYNAMIC(CViewAVGRegionStep, CRecordset)

CViewAVGRegionStep::CViewAVGRegionStep(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_QuestionID = 0;
	m_Step = 0;
	m_avg = 0.0;
	m_RegionID = 0;
	m_SubjectID = 0;
	m_Type = 0;
	m_nFields = 6;
	m_nDefaultType = snapshot;
}
//#error Security Issue: The connection string may contain a password
//// 此连接字符串中可能包含密码
//// 下面的连接字符串中可能包含明文密码和/或
//// 其他重要信息。请在查看完
//// 此连接字符串并找到所有与安全有关的问题后移除 #error。可能需要
//// 将此密码存储为其他格式或使用其他的用户身份验证。
//CString CViewAVGRegionStep::GetDefaultConnect()
//{
//	return _T("DSN=eTest;APP=Microsoft\x00ae Visual Studio .NET;WSID=SKY;DATABASE=eTest;LANGUAGE=\x7b80\x4f53\x4e2d\x6587;Trusted_Connection=Yes");
//}

CString CViewAVGRegionStep::GetDefaultSQL()
{
	return _T("[dbo].[vAVGRegionStep]");
}

void CViewAVGRegionStep::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() 和 RFX_Int() 这类宏依赖的是
// 成员变量的类型，而不是数据库字段的类型。
// ODBC 尝试自动将列值转换为所请求的类型
	RFX_Long(pFX, _T("[QuestionID]"), m_QuestionID);
	RFX_Byte(pFX, _T("[Step]"), m_Step);
	RFX_Single(pFX, _T("[avg]"), m_avg);
	RFX_Int(pFX, _T("[RegionID]"), m_RegionID);
	RFX_Int(pFX, _T("[SubjectID]"), m_SubjectID);
	RFX_Byte(pFX, _T("[Type]"), m_Type);

}
/////////////////////////////////////////////////////////////////////////////
// CViewAVGRegionStep 诊断

#ifdef _DEBUG
void CViewAVGRegionStep::AssertValid() const
{
	CRecordset::AssertValid();
}

void CViewAVGRegionStep::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG


