/*
 * @Author: HZW ZJM CSS
 * @Date: 2021-05-11 22:46:35
 * @LastEditTime: 2021-05-13 10:49:49
 * @Description: 
 */

#ifndef _DV_Router_H_
#define _DV_Router_H_

#include "Router.h"
#include "NextRoutes.h"

//DV router 
class DV_Router : public Router
{
public:
    /**
     * @description: run the control thread
     * @param {*}
     * @return {*}
     */
    void Run();

    /**
     * @description: net_state is the next_routers,
     * @param {Message} message
     * @return {bool} return true if next routers is changed
     */
    bool update_net_state(Message message);

    /**
     * @description: update the route table based on DV algorithm 
     * @param {*}
     * @return {bool } return true if route table is changed
     */
    bool update_route_table();
private:
    NextRouters my_next_routers_;
};


#endif
