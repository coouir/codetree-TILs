arrM = [0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

def days_from_start_of_year(m, d):
    total_days = 0
    for i in range(1, m):
        total_days += arrM[i]
    total_days += d
    return total_days

m1, d1, m2, d2 = map(int, input().split())
A = input()

day_str_to_num = {
    "Mon": 0, "Tue": 1, "Wed": 2, "Thu": 3, "Fri": 4, "Sat": 5, "Sun": 6
}
target_weekday = day_str_to_num[A]

start_weekday = 0

start_total_days = days_from_start_of_year(m1, d1)
end_total_days = days_from_start_of_year(m2, d2)

days_between = end_total_days - start_total_days

start_date_weekday = (start_weekday + (start_total_days - 1)) % 7

count = 0
for i in range(days_between + 1):
    if (start_date_weekday + i) % 7 == target_weekday:
        count += 1

# 결과 출력
print(count)