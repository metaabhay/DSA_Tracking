# Write your MySQL query statement below
select (
Select distinct salary
From Employee
Order by salary Desc
limit 1 offset 1
) as SecondHighestSalary;

