select name, CAST((EXTRACT(DAY FROM payday)) as int) as day
from loan;