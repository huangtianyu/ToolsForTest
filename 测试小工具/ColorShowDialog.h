#pragma once
#include "afxwin.h"


// CColorShowDialog 对话框

class CColorShowDialog : public CDialogEx
{
	DECLARE_DYNAMIC(CColorShowDialog)
	
public:
	CColorShowDialog(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CColorShowDialog();

// 对话框数据
	enum { IDD = IDD_DIALOG4 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual BOOL OnInitDialog();
	DECLARE_MESSAGE_MAP()
public:
	BOOLEAN flag;
	const int TIME_NAME = 100;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	CStatic m_picture;
	afx_msg void OnBnClickedButton2();
};
