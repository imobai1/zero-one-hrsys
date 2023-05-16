#ifndef __ContractController__
#define __ContractController__

#include "oatpp-swagger/Types.hpp"
#include "domain/vo/BaseJsonVO.h"
#include "ApiHelper.h"
#include "../../Macros.h"
#include "domain/query/ContractQuery/ContractQuery.h"
#include "../../domain/dto/ContractDTO/ContractDTO.h"
#include "../../domain/vo/ContractVO/ContractVO.h"

//�޸ĺ�ͬ�������
#define UPDATECONTRACTINFO \
info->queryParams.add<String>("PIMCONTRACTID").description = ZH_WORDS_GETTER("contract.PIMCONTRACTID");\
info->queryParams["PIMCONTRACTID"].addExample("default", String("(:3[___]"));\
info->queryParams.add<String>("CREATEMAN").description = ZH_WORDS_GETTER("contract.CREATEMAN");\
info->queryParams["CREATEMAN"].addExample("default", String("(:3[___]"));\
info->queryParams["CREATEMAN"].required = false;\
info->queryParams.add<String>("CREATEDATE").description = ZH_WORDS_GETTER("contract.CREATEDATE");\
info->queryParams["CREATEDATE"].addExample("default", String("(:3[___]"));\
info->queryParams["CREATEDATE"].required = false;\
info->queryParams.add<String>("UPDATEDATE").description = ZH_WORDS_GETTER("contract.UPDATEDATE");\
info->queryParams["UPDATEDATE"].addExample("default", String("((:3[___]"));\
info->queryParams["UPDATEDATE"].required = false;\
info->queryParams.add<String>("PIMCONTRACTNAME").description = ZH_WORDS_GETTER("contract.PIMCONTRACTNAME");\
info->queryParams["PIMCONTRACTNAME"].addExample("default", String("(:3[___]"));\
info->queryParams["PIMCONTRACTNAME"].required = false 

//��ѯ��ͬ�������
#define QUERYCONTRACTINFO \
info->queryParams.add<String>("PIMCONTRACTID").description = ZH_WORDS_GETTER("contract.PIMCONTRACTID");\
info->queryParams["PIMCONTRACTID"].addExample("default", String("(:3[___]"))


using namespace oatpp;

// 0 ����API������ʹ�ú�
#include OATPP_CODEGEN_BEGIN(ApiController) //<- Begin Codegen

class ContractController : public oatpp::web::server::api::ApiController // 1 �̳п�����
{
	// 2 ����������������
	API_ACCESS_DECLARE(ContractController);

public:
	// 3.1.1 �ӿ�����:�鿴ָ����ͬ
	ENDPOINT_INFO(queryContract) {
		// ����ӿڱ���
		info->summary = ZH_WORDS_GETTER("contract.check");
		// ���Ĭ����Ȩ����
		API_DEF_ADD_AUTH();
		// ������Ӧ��������
		API_DEF_ADD_RSP_JSON_WRAPPER(ContractJsonVO);
		// ���������ѯ����
		QUERYCONTRACTINFO;
	}
	// 3.1.2 ����ӿڶ˵�
	ENDPOINT(API_M_GET, "/queryContract", queryContract, API_HANDLER_AUTH_PARAME, QUERIES(QueryParams, qps)) {
		// ������ѯ����������������ģ�Ͷ���
		API_HANDLER_QUERY_PARAM(query, ContractQuery, qps);
		// ��Ӧ���
		API_HANDLER_RESP_VO(execQueryContract(query));
	}

	//3.2.1 �ӿ�����:�޸�ָ����ͬ
	ENDPOINT_INFO(updateContract) {
		// ����ӿڱ���
		info->summary = ZH_WORDS_GETTER("contract.update");
		// ������Ӧ������ʽ
		API_DEF_ADD_RSP_JSON_WRAPPER(Uint64JsonVO);
		// ���������ѯ����
		UPDATECONTRACTINFO;
	}

	// 3.2.2 ����ӿڶ˵�
	ENDPOINT(API_M_PUT, "/updateContract", updateContract, BODY_DTO(ContractDTO::Wrapper, dto)) {
		// ��Ӧ���
		API_HANDLER_RESP_VO(execUpdateContract(dto));
	}

	//3.3.1 �ӿ�����:�����ͬ
	ENDPOINT_INFO(uploadContract) {
		// ����ӿڱ���
		info->summary = ZH_WORDS_GETTER("contract.upload");
		// ������Ӧ������ʽ
		API_DEF_ADD_RSP_JSON_WRAPPER(Uint64JsonVO);
		// ���������ѯ����
		info->queryParams.add<String>("UploadPath").description = ZH_WORDS_GETTER("contract.uploadpath"); 
		info->queryParams["UploadPath"].addExample("default", String("(:3[___]")); 
	}

	// 3.3.2 ����ӿڶ˵�
	ENDPOINT(API_M_PUT, "/uploadContract", uploadContract, BODY_DTO(PathDTO::Wrapper, dto)) {
		// ��Ӧ���
		API_HANDLER_RESP_VO(execUploadContract(dto));
	}


	//3.4.1 �ӿ�����:������ͬ
	ENDPOINT_INFO(downloadContract) {
		// ����ӿڱ���
		info->summary = ZH_WORDS_GETTER("contract.download");
		// ������Ӧ������ʽ
		API_DEF_ADD_RSP_JSON_WRAPPER(PathJsonVO);
		// ���������ѯ����
		info->queryParams.add<String>("DownloadPath").description = ZH_WORDS_GETTER("contract.downloadpath");
		info->queryParams["DownloadPath"].addExample("default", String("(:3[___]"));
	}

	// 3.4.2 ����ӿڶ˵�
	ENDPOINT(API_M_PUT, "/downloadContract", downloadContract, BODY_DTO(PathDTO::Wrapper, dto)) {
		// ��Ӧ���
		API_HANDLER_RESP_VO(execDownloadContract(dto));
	}

private:
	//��ͬ��ѯ
	ContractJsonVO::Wrapper execQueryContract(const ContractQuery::Wrapper& query);
	//�޸ĺ�ͬ
	Uint64JsonVO::Wrapper execUpdateContract(const ContractDTO::Wrapper& dto);
	//�����ͬ
	Uint64JsonVO::Wrapper execUploadContract(const PathDTO::Wrapper& dto);
	//������ͬ
	PathJsonVO::Wrapper execDownloadContract(const PathDTO::Wrapper& dto);

};
// 0 ȡ��API������ʹ�ú�
#include OATPP_CODEGEN_END(ApiController) //<- End Codegen

#endif 
