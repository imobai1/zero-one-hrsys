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
public: // ����ӿ�

	// ��ѯ
	ENDPOINT_INFO(queryTest) {
		// ����ӿڱ���
		info->summary = "This is RewardAndPunish Query";
		// ������Ӧ��������
		API_DEF_ADD_RSP_JSON_WRAPPER(StringJsonVO);
		// �����ҳ��ѯ��������
		API_DEF_ADD_PAGE_PARAMS();
		// ������������������
		info->queryParams.add<String>("name").description = ZH_WORDS_GETTER("sample.field.name");
		info->queryParams["name"].addExample("default", String("li ming"));
		info->queryParams["name"].required = false;
		info->queryParams.add<String>("sex").description = ZH_WORDS_GETTER("sample.field.sex");
		info->queryParams["sex"].addExample("default", String("N"));
		info->queryParams["sex"].required = false;
	}

	ENDPOINT(API_M_GET, "/rewardandpunish", queryTest, QUERIES(QueryParams, qps)) {
		// ������ѯ����������������ģ�Ͷ���
		API_HANDLER_QUERY_PARAM(query, PageQuery, qps);
		//��Ӧ���
		API_HANDLER_RESP_VO(execQueryTest(query));
	}


private: // ����ӿ�ִ�к���
	StringJsonVO::Wrapper execQueryTest(const PageQuery::Wrapper& query);
};

#include OATPP_CODEGEN_END(ApiController)

#endif