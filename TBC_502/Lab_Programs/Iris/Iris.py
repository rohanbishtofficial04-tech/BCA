import pandas as pd
import seaborn as sns
import matplotlib.pyplot as plt

# reading the dataset
data = pd.read_csv(r"c:\Users\rohan\Desktop\BCA\TBC_502\Lab_Programs\Iris\Iris.csv")
data.columns = data.columns.str.strip()
print(data.head())
# Printing Top 5 rows of the dataset
print("\n")
print(data.head(10))
# Printing Bottom 5 rows of the dataset
print("\n")
print(data.tail())
# Printing specific columns
print("\n")
print(data.iloc[0:5, 0:3])
# Printing specific rows
print("\n")
data.info()
# Printing summary of the dataset
print("\n")
print(data.describe())
print("\n")
# Dropping duplicates
print(data.drop_duplicates(subset="Species"))
print("\n")
# Counting the number of unique values in a column
print(data.value_counts("Species"))
print("\n")
Sepal_Area = data["SepalLengthCm"] * data["SepalWidthCm"]
data.head()
print("\n")
# Data Visualization
sns.countplot(x="Species", data=data)
plt.show()

sns.scatterplot(x="SepalLengthCm", y="SepalWidthCm", hue="Species", data=data)

# placing legend outside the plot
plt.legend(bbox_to_anchor=(1.05, 1), loc=2, borderaxespad=0.0)
plt.show()
data["Sepal_Area"] = Sepal_Area
print(data.head())

