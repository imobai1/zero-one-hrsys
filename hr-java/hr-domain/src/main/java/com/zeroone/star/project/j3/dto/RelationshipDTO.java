package com.zeroone.star.project.j3.dto;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import lombok.Data;

/**
 * <p>
 * 描述：与本人关系下拉菜单
 * </p>
 * <p>版权：&copy;01星球</p>
 * <p>地址：01星球总部</p>
 *
 * @author tomcatcc
 * @version 1.0.0
 */
@Data
@ApiModel("与本人关系")
public class RelationshipDTO {

    @ApiModelProperty(value = "关系类型" , example = "父子")
    private String Relationship;
}
