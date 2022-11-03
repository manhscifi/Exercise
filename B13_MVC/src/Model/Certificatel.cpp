#include"Certificate.h"

Certificate::Certificate()
{
	mCertificateID = "";
	mCertificateName = "";
	mCertificateRank = "";
	mCertificateDate = "";
}

Certificate::Certificate(string certificateID, string certificateName, string certificateRank, string certificateDate)
{
	mCertificateID = certificateID;
	mCertificateName = certificateName;
	mCertificateRank = certificateRank;
	mCertificateDate = certificateDate;
}

Certificate::~Certificate()
{}

void Certificate::setCertificateID(string certificateID)
{
	mCertificateID = certificateID;
}

void Certificate::setCertificateName(string certificateName)
{
	mCertificateName = certificateName;
}

void Certificate::setCertificateRank(string certificateRank)
{
	mCertificateRank = certificateRank;
}

void Certificate::setCertificateDate(string certificateDate)
{
	mCertificateDate = certificateDate;
}

string Certificate::getCertificateID()
{
	return mCertificateID;
}

string Certificate::getCertificateName()
{
	return mCertificateName;
}

string Certificate::getCertificateRank()
{
	return mCertificateRank;
}

string Certificate::getCertificateDate()
{
	return mCertificateDate;
}
