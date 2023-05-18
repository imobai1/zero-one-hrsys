#pragma once

//Author: Diaukray

#ifndef _REWARDANDPUNISHCONTROLLER_H_
#define _REWARDANDPUNISHCONTROLLER_H_

#include "domain/vo/BaseJsonVO.h"
#include "ApiHelper.h"
#include "domain/query/PageQuery.h"
#include "../../domain/GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(ApiController)



class RewardAndPunishController : public oatpp::web::server::api::ApiController
{
	API_ACCESS_DECLARE(RewardAndPunishController);
public: // 定义接口

	// 查询
	ENDPOINT_INFO(queryTest) {
		// 定义接口标题
		info->summary = "This is RewardAndPunish Query";
		// 定义响应参数类型
		API_DEF_ADD_RSP_JSON_WRAPPER(StringJsonVO);
		// 定义分页查询参数描述
		API_DEF_ADD_PAGE_PARAMS();
		// 定义其他表单参数描述
		info->queryParams.add<String>("name").description = ZH_WORDS_GETTER("sample.field.name");
		info->queryParams["name"].addExample("default", String("li ming"));
		info->queryParams["name"].required = false;
		info->queryParams.add<String>("sex").description = ZH_WORDS_GETTER("sample.field.sex");
		info->queryParams["sex"].addExample("default", String("N"));
		info->queryParams["sex"].required = false;
	}

	ENDPOINT(API_M_GET, "/rewardandpunish", queryTest, QUERIES(QueryParams, qps)) {
		// 解析查询参数（解析成领域模型对象）
		API_HANDLER_QUERY_PARAM(query, PageQuery, qps);
		//响应结果
		API_HANDLER_RESP_VO(execQueryTest(query));
	}


private: // 定义接口执行函数
	StringJsonVO::Wrapper execQueryTest(const PageQuery::Wrapper& query);
};

#include OATPP_CODEGEN_END(ApiController)

#endif