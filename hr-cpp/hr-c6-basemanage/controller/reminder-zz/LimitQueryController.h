#pragma once
#include "domain/vo/BaseJsonVO.h"
#include "ApiHelper.h"
#include "domain/query/PageQuery.h"
#include "../../../arch-demo/Macros.h"
#include "ServerInfo.h"
#include OATPP_CODEGEN_BEGIN(ApiController) //<- Begin Codegen

//using namespace oatpp;
//namespace multipart = oatpp::web::mime::multipart;
class LimitQueryController:public oatpp::web::server::api::ApiController
{
	API_ACCESS_DECLARE(LimitQueryController);
public:
	//����ӿ�����������ҳ��ѯ
	ENDPOINT_INFO(queryLimit) {
		//����ӿڱ���
		info->summary = "limitQuery";
		//������Ӧ�������͡���+string
		API_DEF_ADD_RSP_JSON_WRAPPER(StringJsonVO);
		//�����ҳ��ѯ��������
		API_DEF_ADD_PAGE_PARAMS();
		//�����ֶ�
		info->queryParams.add<String>("employee_id").description = "yuan gong bian hao";
		info->queryParams["employee_id"].required = false;

		info->queryParams.add<String>("employee_name").description = "yuan gong xing ming";
		info->queryParams["employee_name"].required = false;

		info->queryParams.add<String>("employee_statu").description = "yuan gong zhuang tai";
		info->queryParams["employee_statu"].required = false;

		info->queryParams.add<String>("contract_id").description = "he tong bian hao";
		info->queryParams["contract_id"].required = false;

		info->queryParams.add<String>("contract_var").description = "he tong lei bie";
		info->queryParams["contract_var"].required = false;

		info->queryParams.add<String>("contract_statu").description = "he tong zhuang tai";
		info->queryParams["contract_statu"].required = false;

		info->queryParams.add<String>("begin_time").description = "qi shi ri qi";
		info->queryParams["begin_time"].required = false;

		info->queryParams.add<String>("deadline").description = "jie shu ri qi";
		info->queryParams["deadline"].required = false;

		info->queryParams.add<String>("contract_lx").description = "he tong lei xing";
		info->queryParams["contract_lx"].required = false;
	}
	//����ӿڶ˵�
	ENDPOINT(API_M_GET, "/queryContract", queryLimit, QUERIES(QueryParams, qps)) {
		//������ѯ�β���������������ģ�Ͷ���
		API_HANDLER_QUERY_PARAM(query, PageQuery, qps);
		//��Ӧ���
		API_HANDLER_RESP_VO(execQueryLimit(query));
	}
	//����ȫ��
	ENDPOINT_INFO(ExportContract) {
		//����ӿڱ���
		info->summary = "Export";
		//������Ӧ�������͡�������
		API_DEF_ADD_RSP_JSON_WRAPPER(StringJsonVO);
	}
	ENDPOINT(API_M_GET, "/exportContract", ExportContract, QUERIES(QueryParams, qps)) {
		//������ѯ�β���������������ģ�Ͷ���
		API_HANDLER_QUERY_PARAM(export_contract, PageQuery, qps);
		//��Ӧ���
		API_HANDLER_RESP_VO(execExportAll(export_contract));
	}
private:
	//��ҳ��ѯ��ִ�нӿں���
	StringJsonVO::Wrapper execQueryLimit(const PageQuery::Wrapper& query);
	//ȫ��������ִ�нӿں���
	StringJsonVO::Wrapper execExportAll(const PageQuery::Wrapper& query);
};
#include OATPP_CODEGEN_END(ApiController) //<- End Codegen