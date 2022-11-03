#pragma once
#include<iostream>
using namespace std;

class Certificate
{
private:
	string mCertificateID;
	string mCertificateName;
	string mCertificateRank;
	string mCertificateDate;
public:
	Certificate();
	Certificate(string CertificateID, string CertificateName, string CertificateRank, string CertificateDate);
	~Certificate();

	void setCertificateID(string CertificateID);
	void setCertificateName(string CertificateName);
	void setCertificateRank(string CertificateRank);
	void setCertificateDate(string CertificateDate);

	string getCertificateID();
	string getCertificateName();
	string getCertificateRank();
	string getCertificateDate();
};
