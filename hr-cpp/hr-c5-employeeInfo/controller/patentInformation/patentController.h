#pragma once

#ifndef _TESTCONTROLLER_H_
#define _TESTCONTROLLER_H_

#include "domain/vo/BaseJsonVO.h"
#include "ApiHelper.h"
#include "domain/query/patentInformation/patentInformationQuery.h"
#include "domain/dto/patentInformation/patentInformationDTO.h"
#include "domain/vo/patentInformation/patentInformationVO.h"


#include OATPP_CODEGEN_BEGIN(ApiController) // 0

/**
 * 测试控制器
 */
class PatentController : public oatpp::web::server::api::ApiController // 1
{
	// 2 定义控制器访问入口
	API_ACCESS_DECLARE(PatentController);
public: // 定义接口
	// 3 定义接口描述
	ENDPOINT_INFO(queryTest) {
		// 定义接口标题
		info->summary = "patentInformation query";
		// 定义响应参数类型
		API_DEF_ADD_RSP_JSON_WRAPPER(PatentPageJsonVO);
		// 定义分页查询参数描述
		API_DEF_ADD_PAGE_PARAMS();
		// 添加其他查询参数
		info->queryParams.add<String>("ZLH").description = ZH_WORDS_GETTER("patentInformation.field.ZLH");
		info->queryParams["ZLH"].addExample("default", String("patentInformation"));
	}
	// 4 定义接口端点
	ENDPOINT(API_M_GET, "/test", queryTest, QUERIES(QueryParams, qps)) {
		// 解析查询参数（解析成领域模型对象）
		API_HANDLER_QUERY_PARAM(query, PatentQuery, qps);
		// 响应结果
		API_HANDLER_RESP_VO(execQueryPatent(query));
	}
private: // 定义接口执行函数
	// 5 定义接口的执行函数
	PatentPageJsonVO::Wrapper execQueryPatent(const PatentQuery::Wrapper& query);
};

#include OATPP_CODEGEN_END(ApiController) // 0

#endif // !_TESTCONTROLLER_H_