import collections
import copy
class Solution(object):
    def accountsMerge(self,accounts):
        """
        :type accounts :List[List[str]]
        :rtype List[List[str]]
        并交集实现
        """
        accounts=copy.deepcopy(accounts)
        em_name={}
        graph = collections.defaultdict(set)
        ans=[]
        #建立第一个账户与其他所有账户之间的连接,同时其他账户到第一个账户有连接
        for acc in accounts:
            name=acc[0]
            for account in acc[1:]:
                graph[acc[1]].add(account)
                graph[account].add(acc[1])
                em_name[account]=name
        #遍历graph,深度搜索姓名下所有的账户
        seen=set()
        for node in graph:
            if node not in seen:
                seen.add(node)
                tmp=[node]
                component=[]
                while tmp:
                    acc=tmp.pop()
                    seen.add(acc)
                    if acc not in component:
                        component.append(acc)
                    for nod in graph[acc]:
                        if nod not in seen:
                            tmp.append(nod)
                        
                ans.append([em_name[node]]+sorted(component))
        return ans
accounts=[["John", "johnsmith@mail.com", "john00@mail.com"], ["John", "johnnybravo@mail.com"], ["John", "johnsmith@mail.com", "john_newyork@mail.com"], ["Mary", "mary@mail.com"]]
ans=Solution()
res=ans.accountsMerge(accounts)
print(res)
