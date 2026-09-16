# Write your MySQL query statement below
select name,sum(amount) as balance
from Users u
left join Transactions t
on u.account = t.account
group by name
HAVING SUM(amount) > 10000;

