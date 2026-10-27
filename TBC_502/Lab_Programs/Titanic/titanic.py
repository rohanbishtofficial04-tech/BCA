import pandas as pd
import seaborn as sns
import matplotlib.pyplot as plt

# reading the dataset
data = pd.read_csv(r"c:\Users\rohan\Desktop\BCA\TBC_502\Lab_Programs\Titanic\titanic.csv")

# Strip spaces from column names
data.columns = data.columns.str.strip()

print(data.columns)  # See actual column names

num_cols = ["Age", "Fare", "SibSp", "Parch", "Pclass"]

# Convert columns to numeric (important for calculations)
for col in num_cols:
    data[col] = pd.to_numeric(data[col], errors='coerce')

# Mean of numerical columns
print("Mean of numerical columns:\n", data[num_cols].mean())
# Median of numerical columns
print("Median of numerical columns:\n", data[num_cols].median())
# Mode of numerical columns
print("Mode of numerical columns:\n", data[num_cols].mode())
# Standard Deviation of numerical columns
print("Standard Deviation of numerical columns:\n", data[num_cols].std())
# max value
print("Max values of numerical columns:\n", data[num_cols].max())
# min value
print("Min values of numerical columns:\n", data[num_cols].min())