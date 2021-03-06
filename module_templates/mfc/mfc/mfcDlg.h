
// mfcDlg.h: 头文件
//

#pragma once
#include "taskBus/Cspthread.h"

// CmfcDlg 对话框
class CmfcDlg : public CDialog
{
// 构造
public:
	CmfcDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFC_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;
	CWinThread * m_pThread = nullptr;
	afx_msg LRESULT on_msg_pack(WPARAM, LPARAM);
	afx_msg LRESULT on_msg_quit(WPARAM, LPARAM);
	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CListBox m_list;
};
