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
	//定义接口描述——分页查询
	ENDPOINT_INFO(queryLimit) {
		//定义接口标题
		info->summary = "limitQuery";
		//定义响应参数类型——+string
		API_DEF_ADD_RSP_JSON_WRAPPER(StringJsonVO);
		//定义分页查询参数描述
		API_DEF_ADD_PAGE_PARAMS();
		//增加字段
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
	//定义接口端点
	ENDPOINT(API_M_GET, "/queryContract", queryLimit, QUERIES(QueryParams, qps)) {
		//解析查询参参数（解析成领域模型对象）
		API_HANDLER_QUERY_PARAM(query, PageQuery, qps);
		//响应结果
		API_HANDLER_RESP_VO(execQueryLimit(query));
	}
	//导出全部
	ENDPOINT_INFO(ExportContract) {
		//定义接口标题
		info->summary = "Export";
		//定义响应参数类型——链接
		API_DEF_ADD_RSP_JSON_WRAPPER(StringJsonVO);
	}
	ENDPOINT(API_M_GET, "/exportContract", ExportContract, QUERIES(QueryParams, qps)) {
		//解析查询参参数（解析成领域模型对象）
		API_HANDLER_QUERY_PARAM(export_contract, PageQuery, qps);
		//响应结果
		API_HANDLER_RESP_VO(execExportAll(export_contract));
	}
private:
	//分页查询的执行接口函数
	StringJsonVO::Wrapper execQueryLimit(const PageQuery::Wrapper& query);
	//全部导出的执行接口函数
	StringJsonVO::Wrapper execExportAll(const PageQuery::Wrapper& query);
};
#include OATPP_CODEGEN_END(ApiController) //<- End Codegen