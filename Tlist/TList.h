#pragma once
#include <iostream>

using namespace std;

class TLink;
class TList;
typedef TLink* pTLink;

class TLink //����� �����
{
	int Data;
	pTLink pNext;
public:
	TLink(int d, pTLink p) //�����������, ������� ����� � ��-�� � ����������
	{
		Data = d;
		pNext = p;
	}
	friend TList;
};

class TList //����� ������
{
	pTLink pFirst;
	pTLink tmp;
	pTLink pHead;
	pTLink pCurr;
	pTLink pPrev;
	pTLink pLast;
	pTLink pNew;
	pTLink pDel;
public:
	int size, pos;
public:
	TList(); //�����������
	~TList(); //����������
	void DelFirst(); //������� ������ �������
	void clear(); //������� ���� ������
	int GetSize() { return size; } // ��� ��������� � ������
	int& operator[](const int index); //��������������� �������� []
	void InsLast(int val); //������ ��������� ������� � ������
	void InsFirst(int val); //�������� ������ ������� � ������
	void DelLast(); //������� ��������� ������� � ������
	void InsElem(int val, int index); //�������� ������� � ������
	void DelElem(int index); //������� ������� � ������
};

TList::TList()
{
	size = 0;
	pHead = nullptr;
}
void TList::InsLast(int val)
{
	if (pHead == nullptr)
	{
		pHead = new TLink(val,nullptr);
	}
	else
	{
		pCurr = this->pHead;
		while (pCurr->pNext != nullptr)
		{
			pCurr = pCurr->pNext;
		}
		pCurr->pNext = new TLink(val, nullptr);
	}
	size++;
}
TList::~TList()
{
	clear();
}
int& TList::operator[](const int index)
{
	int pos = 0;
	pCurr = this->pHead;
	while (pCurr != nullptr)
	{
		if (pos == index)
		{
			return pCurr->Data;
		}
		pCurr = pCurr->pNext;
		pos++;
	}
}
void TList::DelFirst()
{
	tmp = pHead;
	pHead = pHead->pNext;
	delete tmp;
	size--;
}
void TList::clear()
{
	while (size)
	{
		DelFirst();
	}
}
void TList::InsFirst(int val)
{
	pHead = new TLink(val, pHead);
	size++;
}
void TList::DelLast()
{
	DelElem(size - 1);
}
void TList::InsElem(int val, int index)
{
	if (index == 0)
	{
		InsFirst(val);
	}
	else
	{
		if (index > size - 1)
		{
			InsLast(val);
		}
		else
		{
			pPrev = this->pHead;
			for (int i = 0; i < index - 1; i++)
			{
				pPrev = pPrev->pNext;
			}
			pNew = new TLink(val, pPrev->pNext);
			pPrev->pNext = pNew;

			size++;
		}
	}
}

void TList::DelElem(int index)
{
	if (index == 0)
	{
		DelFirst();
	}
	else
	{
		pPrev = this->pHead;
		for (int i = 0; i < index - 1; i++)
		{
			pPrev = pPrev->pNext;
		}
		pDel = pPrev->pNext;
		pPrev->pNext = pDel->pNext;
		delete pDel;
		size--;
	}
}
