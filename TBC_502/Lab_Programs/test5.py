from sklearn.datasets import load_iris
from sklearn.cluster import KMeans

data=load_iris()
X=data.data
y=data.target

kmeans=KMeans(n_clusters=3)
kmeans.fit(X)

print("labels: \n",kmeans.labels_)