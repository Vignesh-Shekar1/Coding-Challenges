float find_uniq(const std::vector<float> &v)
{
  float major = (v[0] == v[1]) ? v[0] : v[2];
  for (int i = 0; i < v.size(); i++){
    if (v[i] != major) return v[i];
  }
}
