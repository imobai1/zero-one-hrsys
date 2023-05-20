#ifndef __CONTRACTDTO__
#define __CONTRACTDTO__

#include "../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

//DTO:��ͬ��Ϣ
class ContractDTO : public oatpp::DTO
{
public:
	ContractDTO() {};
	ContractDTO(String PIMCONTRACTID, String CREATEMAN, String CREATEDATE, \
	String UPDATEDATE, String PIMCONTRACTNAME) :\
		PIMCONTRACTID(PIMCONTRACTID), CREATEMAN(CREATEMAN),\
		CREATEDATE(CREATEDATE), UPDATEDATE(UPDATEDATE),\
		PIMCONTRACTNAME(PIMCONTRACTNAME){};

	DTO_INIT(ContractDTO, DTO);

	// ��ͬ��Ϣ��ʶ
	DTO_FIELD(String, PIMCONTRACTID);
	DTO_FIELD_INFO(PIMCONTRACTID) {
		info->description = ZH_WORDS_GETTER("contract.PIMCONTRACTID");
	}
	// ������
	DTO_FIELD(String, CREATEMAN);
	DTO_FIELD_INFO(CREATEMAN) {
		info->description = ZH_WORDS_GETTER("contract.CREATEMAN");
	}
	// ����ʱ��
	DTO_FIELD(String, CREATEDATE);
	DTO_FIELD_INFO(CREATEDATE) {
		info->description = ZH_WORDS_GETTER("contract.CREATEDATE");
	}
	// ����ʱ��
	DTO_FIELD(String, UPDATEDATE);
	DTO_FIELD_INFO(UPDATEDATE) {
		info->description = ZH_WORDS_GETTER("contract.UPDATEDATE");
	}
	// ��ͬ��Ϣ����
	DTO_FIELD(String, PIMCONTRACTNAME);
	DTO_FIELD_INFO(PIMCONTRACTNAME) {
		info->description = ZH_WORDS_GETTER("contract.PIMCONTRACTNAME");
	}

};



//DTO:�ϴ�·��
class UploadPathDTO : public oatpp::DTO
{
public:
	UploadPathDTO() {};

	DTO_INIT(UploadPathDTO, DTO);

	// �ϴ�·��
	DTO_FIELD(String, UploadPath);
	DTO_FIELD_INFO(UploadPath) {
		info->description = ZH_WORDS_GETTER("contract.uploadpath");
	}

};

//DTO:������ַ+��ҳ����
class DownloadPageDTO : public PageDTO<ContractDTO::Wrapper>
{
public:
	DownloadPageDTO() {};

	DTO_INIT(DownloadPageDTO, PageDTO);

	// ����·��
	DTO_FIELD(String, DownloadPath);
	DTO_FIELD_INFO(DownloadPath) {
		info->description = ZH_WORDS_GETTER("contract.downloadpath");
	}
};

//DTO:������ַ
class DownloadPathDTO : public PageDTO<ContractDTO::Wrapper>
{
public:
	DownloadPathDTO() {};

	DTO_INIT(DownloadPathDTO, PageDTO<ContractDTO::Wrapper>);

	// ����·��
	DTO_FIELD(String, DownloadPath);
	DTO_FIELD_INFO(DownloadPath) {
		info->description = ZH_WORDS_GETTER("contract.downloadpath");
	}
};



#include OATPP_CODEGEN_END(DTO)

#endif // !_TESTDTO_H_