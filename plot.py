import matplotlib.pyplot as plt

# Data for before and after times for each thread
threads = ['Thread 0', 'Thread 1', 'Thread 2']
bars_before = [47.173499375, 37.595887069, 47.657227231]
bars_after = [37.569915071, 35.694299852, 35.351452013]

# Plotting the bar chart
x = range(len(threads))
plt.figure(figsize=(10, 6))
plt.bar(x, bars_before, width=0.4, label='Before', color='lightcoral')
plt.bar([i + 0.4 for i in x], bars_after, width=0.4, label='After', color='lightgreen')

# Adding labels and titles
plt.xlabel("Threads")
plt.ylabel("Time (seconds)")
plt.title("Comparison of Thread Execution Times Before(Original) and After(Optimal) Modification")
plt.xticks([i + 0.2 for i in x], threads)
plt.legend()

# Adding time values on top of the bars
for bar in bars_before:
    yval = bar.get_height()
    plt.text(bar.get_x() + bar.get_width()/2, yval, round(yval, 2), ha='center', va='bottom')

for bar in bars_after:
    yval = bar.get_height()
    plt.text(bar.get_x() + bar.get_width()/2, yval, round(yval, 2), ha='center', va='bottom')

plt.tight_layout()
plt.show()
