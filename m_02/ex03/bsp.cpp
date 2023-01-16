/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:09:20 by fakouyat          #+#    #+#             */
/*   Updated: 2022/11/30 21:37:44 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
/*
* given abc and p, p is inside only if the angles apb, bpc, cpa has the same sens.
* For that, we calcule de vectoral product for each angles and compare the signe.
*/

Fixed vectoral_product(Point const a, Point const b, Point const c)
{
	Fixed pv_1;
	Fixed pv_2;
	Fixed pv;
	
	pv_1 = Fixed((a.getX().toFloat() - b.getX().toFloat()) * (c.getY().toFloat() - b.getY().toFloat()));
	pv_2 = Fixed((c.getX().toFloat() - b.getX().toFloat()) * (a.getY().toFloat() - b.getY().toFloat()));
	pv = pv_1 - pv_2;
	
	return (pv);
}

bool bsp(Point const  a, Point const b, Point const c, Point const point)
{
	Fixed pv_apb = vectoral_product(a, point, b);
	Fixed pv_bpc = vectoral_product(b, point, c);
	Fixed pv_cpa = vectoral_product(c, point, a);

	if (pv_apb < 0 && pv_bpc < 0 && pv_cpa < 0)
		return (true);
	if (pv_apb > 0 && pv_bpc > 0 && pv_cpa > 0)
		return (true);
	return (false);
}