package com.zeroone.star.user.mapper;

import com.zeroone.star.user.entity.User;
import com.baomidou.mybatisplus.core.mapper.BaseMapper;
import org.apache.ibatis.annotations.Mapper;

/**
 * <p>
 * 用户表 Mapper 接口
 * </p>
 *
 * @author axiao
 * @since 2023-05-20
 */
@Mapper
public interface UserMapper extends BaseMapper<User> {

}
