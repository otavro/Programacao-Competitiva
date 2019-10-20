select name, customers_number
from lawyers
where customers_number = (select Max(customers_number) from lawyers)
union all
select name, customers_number
from lawyers
where customers_number = (select Min(customers_number) from lawyers)
union all
select 'Average' as name, round(avg(customers_number), 0) as customers_number
from lawyers;