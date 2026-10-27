import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns
from sklearn.cluster import KMeans

iris = pd.read_csv("c:\Users\rohan\Desktop\BCA\TBC_502\Lab_Programs\Iris\Iris.csv")

X = iris.drop("species", axis=1)
y = iris["species"]

y_encoded = y.astype("category").cat.codes


wcss = []

for k in range(1, 11):
    kmeans = KMeans(n_clusters=k, init="k-means++", random_state=42)
    kmeans.fit(X)
    wcss.append(kmeans.inertia_)

plt.figure(figsize=(8, 5))
plt.plot(range(1, 11), wcss, marker="o", linestyle="--", color="b")
plt.title("Elbow Method for Optimal k")
plt.xlabel("Number of Clusters (k)")
plt.ylabel("WCSS (Inertia)")
plt.show()

kmeans = KMeans(n_clusters=3, init="k-means++", random_state=42)
kmeans.fit(X)

iris["Cluster"] = kmeans.labels_


plt.figure(figsize=(8, 6))
sns.scatterplot(
    x=X.iloc[:, 0], y=X.iloc[:, 1], hue=iris["Cluster"], palette="rainbow", s=70
)
plt.scatter(
    kmeans.cluster_centers_[:, 0],
    kmeans.cluster_centers_[:, 1],
    color="black",
    marker="X",
    s=200,
    label="Centroids",
)
plt.title("KMeans Clustering of Iris Dataset")
plt.xlabel(X.columns[0])
plt.ylabel(X.columns[1])
plt.legend()
plt.show()


sample = np.array([[5.1, 3.5, 1.4, 0.2]])
pred = kmeans.predict(sample)

print("Predicted Cluster for sample:", pred[0])
print("\nCluster Centers:\n", kmeans.cluster_centers_)
print("\nInertia:", kmeans.inertia_)
