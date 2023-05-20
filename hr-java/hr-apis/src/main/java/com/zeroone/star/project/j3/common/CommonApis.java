package com.zeroone.star.project.j3.common;

import com.zeroone.star.project.j3.dto.RelationshipDTO;
import com.zeroone.star.project.vo.JsonVO;

import java.util.List;

/**
 * <p>
 * 描述：与本人关系下拉菜单接口定义
 * </p>
 * <p>版权：&copy;01星球</p>
 * <p>地址：01星球总部</p>
 *
 * @author tomcatcc
 * @version 1.0.0
 */

public interface CommonApis {

    	/**
    		 * 获取与本人关系
    		 * @return 数据对象
             *@Date 21:27 2023/5/19
    		 */
        JsonVO<List<RelationshipDTO>> queryRelationship();
}
